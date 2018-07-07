/*
 *  rmdir.c - rmdir command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#if COMMAND_RMDIR
int command_rmdir(int argc, char *argv[])
{
   int i = 2;

#if HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_RMDIR_DESCRIPTION);
      puts(STRING_MINIBOX_RMDIR_USAGE);
      puts("  MINIBOX rmdir --help|--version");
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
      if(rmdir(argv[i]))
      {
         fprintf(stderr, STRING_CANNOT_REMOVE, argv[i]);
      }
   }

   return 0;
}
#endif
