/*
 *  rmdir.c - rmdir command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#ifdef COMMAND_RMDIR
int command_rmdir(int argc, char *argv[])
{
   int i = 2;

   #ifdef HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_RMDIR_DESCRIPTION);
      puts(STRING_MINIBOX_RMDIR_USAGE);
      puts("  MINIBOX rmdir --help|--version");
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

   for(i; i < argc; i++)
   {
      if(rmdir(argv[i]))
      {
         fprintf(stderr, STRING_CANNOT_REMOVE, argv[i]);
      }
   }

   return EXIT_SUCCESS;
}
#endif
