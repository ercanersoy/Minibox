/*
 *  mkdir.c - mkdir command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#ifdef COMMAND_MKDIR
int command_mkdir(int argc, char *argv[])
{
   int i = 2;

#if HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_MKDIR_DESCRIPTION);
      puts(STRING_MINIBOX_MKDIR_USAGE);
      puts("  MINIBOX mkdir --help|--version");
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
      if(mkdir(argv[i], S_IWUSR))
      {
         fprintf(stderr, STRING_CANNOT_CREATE, argv[i]);
      }
   }

   return 0;
}
#endif
