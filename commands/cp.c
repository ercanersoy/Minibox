/***************************
 * MINIBOX cp Command File *
 ***************************/

#include "../minibox.h"

#if COMMAND_CP
int command_cp(int argc, char *argv[])
{
#if HELP
   if(argc == 3 && !strcmp(argv[2], "--help"))
   {
      puts("MINIBOX cp - Copy specified file or directory to specified directory.");
      puts("  MINIBOX cp source destination");
      puts("  MINIBOX cp --help|--version");
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
      if(link(argv[2], argv[3]))
      { 
         fprintf(stderr, "%s can\'t copy.\r\n", argv[2]);
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
