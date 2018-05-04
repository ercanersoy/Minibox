/*****************************
 * MINIBOX pwd Command  File *
 *****************************/

#include "../minibox.h"

#if COMMAND_PWD
int command_pwd(int argc, char *argv[])
{
   char *buffer;

#if HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_PWD_OUTPUT_CURRENT_DIRECTORY_S_NAME);
      puts("  MINIBOX pwd");
      puts("  MINIBOX pwd --help|--version");
      return 0;
   }
#endif

#if VERSION
   else if(!strcmp(argv[2], "--version"))
   {
      version();
      return 0;
   }
#endif

   else
   {
      buffer = (char *)malloc(MAX_PATH_LENGTH);
      puts(getcwd(buffer, MAX_PATH_LENGTH));
      free(buffer);
   }

   return 0;
}
#endif
