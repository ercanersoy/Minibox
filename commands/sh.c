/****************************
 * MINIBOX sh Command  File *
 ****************************/

#include "../minibox.h"

#if COMMAND_SH
int command_sh(int argc, char *argv[])
{
   char *command_line;
   
#if HELP
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

#if VERSION
   else if(!strcmp(argv[2], "--version"))
   {
      version();
      return 0;
   }
#endif

   command_line = (char *) malloc(MAX_COMMAND_LINE_LENGTH);

   loop:

   printf("\r\n#");
   fgets(command_line, MAX_COMMAND_LINE_LENGTH, stdin);
   
   if(!strcmp(command_line, "exit\n"))
   {
      exit(0);
   }
   else if(strcmp(command_line, "\n"))
   {
      system(command_line);
   }

   goto loop;

   free(command_line);

   return 0;
}
#endif
