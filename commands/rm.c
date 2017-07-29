/**********************************
 * MINIBOX rm Command Source File *
 **********************************/

#include "../minibox.h"

#if COMMAND_RM
char item_remove(char *removing_item_path)
{
   DIR *element;
   struct dirent *item_properties;
   char *item_name = alloca(256);
   char *item_path = alloca(260);

   element = opendir(removing_item_path);
   item_properties = readdir(element);
   item_name = item_properties->d_name;

   while(!strlen(item_properties->d_name) && item_name[0] != 1)
   {
      if(strcmp(item_name, ".") && strcmp(item_name, "..") && (strlen(item_path) + strlen(removing_item_path) <= 258))
      {
         strcpy(item_path, removing_item_path);
         strcat(item_path, "\\");
         strcat(item_path, item_name);
         if(item_properties->d_type == DT_DIR)
         {
            item_remove(item_path);
         }
         else
         {
             remove(item_path);
         }
      }

      item_properties = readdir(element);
      item_name = item_properties->d_name;
   }

   closedir(element);

   return rmdir(removing_item_path);
}

int command_rm(int argc, char *argv[])
{
   int i = 2;

#if HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts("MINIBOX rm - Removes files.");
      puts("  MINIBOX rm [-r] items");
      puts("  MINIBOX rm --help|--version\r\n");
      puts("Option:");
      puts("-r  Remove specified directories and their contents recusively.");
      return 0;
   }
#endif

#if VERSION
   if(!strcmp(argv[2], "--version"))
   {
      version();
      return 0;
   }
#endif

   if(!strcmp(argv[2], "-r"))
   {
      i++;

      for(i; i < argc; i++)
      {
         if(item_remove(argv[i]))
         {
            fprintf(stderr, "%s can't remove.\r\n", argv[i]);
         }
      }

      return 0;
   }
   else
   {
      for(i; i < argc; i++)
      {
         if(remove(argv[i]))
         {
            fprintf(stderr, "%s can't remove.\r\n", argv[i]);
         }
      }
   }

   return 0;
}
#endif
