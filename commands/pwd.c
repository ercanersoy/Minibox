/*
 *  pwd.c - pwd command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#ifdef COMMAND_PWD
int command_pwd(int argc, char *argv[])
{
   char *buffer;

   #ifdef HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_PWD_DESCRIPTION);
      puts("  MINIBOX pwd");
      puts("  MINIBOX pwd --help|--version");
      return EXIT_SUCCESS;
   }
   #endif

   #ifdef VERSION
   else if(!strcmp(argv[2], "--version"))
   {
      version();
      return EXIT_SUCCESS;
   }
   #endif

   else
   {
      buffer = (char *)malloc(MAX_PATH_LENGTH);
      puts(getcwd(buffer, MAX_PATH_LENGTH));
      free(buffer);
   }

   return EXIT_SUCCESS;
}
#endif
