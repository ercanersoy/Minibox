/****************************
 * MINIBOX cat Command File *
 ****************************/

#include "../minibox.h"

#ifdef COMMAND_CAT
int command_cat(int argc, char *argv[])
{
   int i = 2;
   char read_buffer;
   FILE *file_resource;
   unsigned char show_ends = 0;
   unsigned char show_tabs = 0; 

#ifdef HELP
      if(!strcmp(argv[2], "--help"))
      {
         puts("MINIBOX cat - Output specified file's contents.");
         puts("  MINIBOX cat [options] file");
         puts("  MINIBOX cat --help|--version\r\n");
         puts("Options:");
         puts("  -E: Ends are shown as \"$\".");
         puts("  -T: Tabs are shown as \"^I\".");
         return 0;
      }
#endif

#ifdef VERSION
      if(!strcmp(argv[2], "--version"))
      {
         version();
         return 0;
      }
#endif

   for(i; i < argc; i++)
   {
      if(!strcmp(argv[i], "-E"))
      {
         show_ends = 1;
      }

      if(!strcmp(argv[i], "-T"))
      {
         show_tabs = 1;
      }
   }

   file_resource = fopen(argv[2], "r");

   read_buffer = fgetc(file_resource);
   while(read_buffer != -1)
   {
      if(show_ends && read_buffer == '\n')
      {
         putchar('$');
      }

      if(show_tabs && read_buffer == '\t')
      {
         puts("^I");
         continue;
      }

      putchar(read_buffer);

      read_buffer = fgetc(file_resource);
   }

   fclose(file_resource);

   return 0;
}
#endif