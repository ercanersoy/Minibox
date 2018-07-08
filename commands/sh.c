/*
 *  sh.c - sh command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#ifdef COMMAND_SH
int command_sh(int argc, char *argv[])
{
   char *command_line;
   
   #ifdef HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_SH_DESCRIPTION);
      puts("  MINIBOX sh");
      puts("  MINIBOX sh --help|--version\r\n");
      puts(STRING_NOTE);
      puts(STRING_MINIBOX_SH_EXIT);
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

   command_line = (char *) malloc(MAX_COMMAND_LINE_LENGTH);

   loop:

   printf("\r\n#");
   fgets(command_line, MAX_COMMAND_LINE_LENGTH, stdin);
   
   if(!strcmp(command_line, "exit\n"))
   {
      exit(EXIT_SUCCESS);
   }
   else if(strcmp(command_line, "\n"))
   {
      system(command_line);
   }

   goto loop;

   free(command_line);

   return EXIT_SUCCESS;
}
#endif
