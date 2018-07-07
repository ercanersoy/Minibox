/*
 *  help.c - help command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#if HELP
#if COMMAND_HELP
int command_help(int argc, char *argv[])
{
   puts(STRING_MINIBOX_COMMANDS);
   puts("beep");
   puts("cat");
   puts("cd");
   puts("clear");
   puts("cp");
   puts("date");
   puts("echo");
   puts("ls");
   puts("mkdir");
   puts("mv");
   puts("help");
   puts("pwd");
   puts("rm");
   puts("rmdir");
   puts("sh");
   puts("time");
   
   return 0;
}
#endif
#endif
