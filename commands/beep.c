/*****************************
 * Minibox beep Command File *
 *****************************/

#include "../minibox.h"

#if COMMAND_BEEP
int command_beep(int argc, char *argv[])
{
   int i = 2;
   int frequency = 750;
   int length = 1000;

#if HELP
      if(!strcmp(argv[2], "--help"))
      {
         puts(MINIBOX_BEEP_OUTPUT_SOUND_FROM_PC_SPEAKER);
         puts(MINIBOX_BEEP_OPTIONS);
         puts("  MINIBOX beep --help|--version\r\n");
         puts(OPTIONS);
         puts(FREQUENCY_SPECIFIY_SOUND_S_FROM_FREQUENCY);
         puts(L_LENGTH_SPECIFIY_SOUND_S_LENGTH_AS_MILLISECONDS);
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
         puts(INVALID_SYNTAX);
         return 1;
      }
   }

   sound(frequency);
   delay(length);
   nosound();
}
#endif
