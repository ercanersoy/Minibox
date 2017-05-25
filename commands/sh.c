/****************************
 * MINIBOX sh Command  File *
 ****************************/

#include "../minibox.h"

#define MAX_COMMAND_LINE_LENGTH 1024

#ifdef COMMAND_SH
int command_sh(int argc, char *argv[])
{
   char *command_line = alloca(MAX_COMMAND_LINE_LENGTH);
   
#ifdef HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts("MINIBOX sh - Minibox shell");
      puts("  MINIBOX sh");
      puts("  MINIBOX sh --help|--version\r\n");
      puts("Note:");
      puts("  In Minibox shell, type exit to exit shell.");
      return 0;
   }
#endif

#ifdef VERSION
   else if(!strcmp(argv[2], "--version"))
   {
      version();
      return 0;
   }
#endif

   loop:
   printf("\r\n%s", "#");
   gets(command_line);
   
   if(strcmp(command_line, "exit") && strcmp(command_line, ""))
   {
      system(command_line);
   }
   else if(!strcmp(command_line, "exit"))
   {
      exit(0);
   }

   goto loop;

   return 0;
}
#endif