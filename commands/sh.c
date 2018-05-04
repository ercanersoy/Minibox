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
      puts(STRING_MINIBOX_SH_MINIBOX_SHELL);
      puts("  MINIBOX sh");
      puts("  MINIBOX sh --help|--version\r\n");
      puts(STRING_NOTE);
      puts(STRING_IN_MINIBOX_SHELL_GIVE_COMMAND_EXIT_TO_EXIT_SHELL);
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
