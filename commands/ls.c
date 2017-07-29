/***************************
 * MINIBOX ls Command File *
 ***************************/

#include "../minibox.h"

#define MAX_PATH_LENGTH 260

#if COMMAND_LS
void path_current_directory(char *path)
{
   getcwd(path, MAX_PATH_LENGTH);
}

int command_ls(int argc, char *argv[])
{
   int i = 2;
   char *path = alloca(MAX_PATH_LENGTH);
   DIR *directory;
   struct dirent *element;
   struct stat status;
   char one_column = 0;
   char do_not_ignore = 0;
   char long_listing = 0;
   struct winsize screen_size;
   unsigned char longest_name_length = 0;
   unsigned char column_count = 0;
   unsigned char column_size = 0;
   int j = 0;

   if(argc > 2)
   {
#if HELP
      if(!strcmp(argv[2], "--help"))
      {
         puts("MINIBOX ls - List directory contents.");
         puts("  MINIBOX ls [options] [file]");
         puts("  MINIBOX ls --help|--version\r\n");
         puts("Options:");
         puts("-1  Display output as one column.");
         puts("-a  Don't ignore \".\" and \"..\".");
         puts("-l  Display long listing format.");
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

      for(i; i < argc; i++)
      {
         if(!strcmp(argv[i], "-1"))
         { 
            one_column = 1;
            path_current_directory(path);
            continue;
         }

         if(!strcmp(argv[i], "-a"))
         { 
            do_not_ignore = 1;
            path_current_directory(path);
            continue;
         }

         if(!strcmp(argv[i], "-l"))
         { 
            long_listing = 1;
            path_current_directory(path);
            continue;
         }

         path = argv[i];
      }
   }
   else
   {
      path_current_directory(path);
   }

   directory = opendir(path);
   if(directory)
   {
      if(one_column)
      {
         while(element = readdir(directory))
         {
            if(!do_not_ignore && (!strcmp(element->d_name, ".") || !strcmp(element->d_name, "..")))
            {
               continue;
            }

            puts(element->d_name);
         }
      }
      else if(long_listing)
      {
         while(element = readdir(directory))
         {
            stat(element->d_name, &status);
            if(!do_not_ignore && (!strcmp(element->d_name, ".") || !strcmp(element->d_name, "..")))
            {
               continue;
            }

            if(S_ISDIR(status.st_mode))
            {
               printf("d ");
            }
            else
            {
               printf("  ");
            }

            printf("%16d %s \r\n", status.st_size, element->d_name);
         }
      }
      else
      {
         ioctl(0, TIOCGWINSZ, &screen_size);
         
         while(element = readdir(directory))
         {
            if(!do_not_ignore && (!strcmp(element->d_name, ".") || !strcmp(element->d_name, "..")))
            {
               continue;
            }
            
            if(longest_name_length < element->d_namlen)
            {
               longest_name_length = element->d_namlen;
            }
         }

         column_count = screen_size.ws_col / (longest_name_length + 2);
         if(column_count == 0)
         {
            column_count = 1;
         }

         column_size = screen_size.ws_col / column_count;

         rewinddir(directory);

         i = 0;
         
         while(element = readdir(directory))
         {
            if(!do_not_ignore && (!strcmp(element->d_name, ".") || !strcmp(element->d_name, "..")))
            {
               continue;
            }

            printf("%s", element->d_name);
            for(j = element->d_namlen; j < column_size - 1; j++)
            {
               printf(" ");
            }

            i++;
            if(i == column_count)
            {
               printf("\r\n");
               i = 0;
            }
         }
      }
   }
}
#endif
