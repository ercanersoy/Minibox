/*
 *  cp.c - cp command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#if COMMAND_CP
int command_cp(int argc, char *argv[])
{
#if HELP
   if(argc == 3 && !strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_CP_DESCRIPTION);
      puts(STRING_MINIBOX_CP_USAGE);
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
         fprintf(stderr, STRING_CANNOT_COPY, argv[2]);
      }
   }
   else if(argc < 4)
   {
      fputs(STRING_NO_ENOUGH_ARGUMENTS, stderr);
   }
   else
   {
      fputs(STRING_TOO_MUCH_ARGUMENTS, stderr);
   }

   return 0;
}
#endif
