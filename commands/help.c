/*
 *  help.c - help command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#ifdef HELP
   #ifdef COMMAND_HELP
int command_help(int argc, char *argv[])
{
   puts(STRING_MINIBOX_COMMANDS);
      #ifdef COMMAND_BEEP 
   puts("beep");
      #endif

      #ifdef COMMAND_CAT
   puts("cat");
      #endif

      #ifdef COMMAND_CD
   puts("cd");
      #endif

      #ifdef COMMAND_CD
   puts("clear");
      #endif

      #ifdef COMMAND_CP
   puts("cp");
      #endif

      #ifdef COMMAND_DATE
   puts("date");
      #endif

      #ifdef COMMAND_ECHO
   puts("echo");
      #endif

      #ifdef COMMAND_LS
   puts("ls");
      #endif

      #ifdef COMMAND_LS
   puts("mkdir");
      #endif

      #ifdef COMMAND_MV
   puts("mv");
      #endif

   puts("help");

      #ifdef COMMAND_PWD
   puts("pwd");
      #endif

      #ifdef COMMAND_RM
   puts("rm");
      #endif

      #ifdef COMMAND_RMDIR
   puts("rmdir");
      #endif

      #ifdef COMMAND_SH
   puts("sh");
      #endif

      #ifdef COMMAND_TIME
   puts("time");
      #endif
   
   return EXIT_SUCCESS;
}
   #endif
#endif
