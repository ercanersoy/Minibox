/*
 *  beep.c - beep command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#ifdef COMMAND_BEEP
int command_beep(int argc, char *argv[])
{
   int i = 2;
   int frequency = 750;
   int length = 1000;

   #ifdef HELP
      if(!strcmp(argv[2], "--help"))
      {
         puts(STRING_MINIBOX_BEEP_DESCRIPTION);
         puts(STRING_MINIBOX_BEEP_USAGE);
         puts("  MINIBOX beep --help|--version\r\n");
         puts(STRING_OPTIONS);
         puts(STRING_MINIBOX_BEEP_OPTIONS_1);
         puts(STRING_MINIBOX_BEEP_OPTIONS_2);
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
      if(!strcmp(argv[i], "-f"))
      {
         i++;

         frequency = atoi(argv[i]);

         continue;
      }

      if(!strcmp(argv[i], "-l"))
      {
         i++;

         length = atoi(argv[i]);
      }
      
      else
      {
         puts(STRING_INVALID_SYNTAX);
         return EXIT_FAILURE;
      }
   }

   sound(frequency);
   delay(length);
   nosound();
}
#endif
