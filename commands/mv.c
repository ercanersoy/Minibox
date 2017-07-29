/***************************
 * MINIBOX mv Command File *
 ***************************/

#include "../minibox.h"

#if COMMAND_MV
int command_mv(int argc, char *argv[])
{
#if HELP
   if(argc == 3 && !strcmp(argv[2], "--help"))
   {
      puts("MINIBOX mv - Move and/or rename specified");
      puts("file or directory to specified directory.");
      puts("  MINIBOX mv source destination");
      puts("  MINIBOX mv --help|--version");
      return 0;
   }
#endif

#if VERSION
   if(argc == 3 && !strcmp(argv[2], "--version"))
   {
      version();
      return 0;
   }
#endif

   if(argc == 4)
   {
      if(rename(argv[2], argv[3]))
      { 
         fprintf(stderr, "%s can\'t move.\r\n", argv[2]);
      }
   }
   else if(argc < 4)
   {
      fputs("No enough arguments.\r\n", stderr);
   }
   else
   {
      fputs("Too much arguments.\r\n", stderr);
   }

   return 0;
}
#endif
