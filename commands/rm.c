/*
 *  rm.c - rm command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#ifdef COMMAND_RM
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

   #ifdef HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_RM_DESCRIPTION);
      puts(STRING_MINIBOX_RM_USAGE);
      puts("  MINIBOX rm --help|--version\r\n");
      puts(STRING_OPTION);
      puts(STRING_MINIBOX_RM_OPTION);
      return EXIT_SUCCESS;
   }
   #endif

   #ifdef VERSION
   if(!strcmp(argv[2], "--version"))
   {
      version();
      return EXIT_SUCCESS;
   }
   #endif

   if(!strcmp(argv[2], "-r"))
   {
      i++;

      for(i; i < argc; i++)
      {
         if(item_remove(argv[i]))
         {
            fprintf(stderr, STRING_CANNOT_REMOVE, argv[i]);
         }
      }

      return EXIT_SUCCESS;
   }
   else
   {
      for(i; i < argc; i++)
      {
         if(remove(argv[i]))
         {
            fprintf(stderr, STRING_CANNOT_REMOVE, argv[i]);
         }
      }
   }

   return EXIT_SUCCESS;
}
#endif
