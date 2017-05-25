/*****************************
 * Minibox beep Command File *
 *****************************/

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
         puts("MINIBOX beep - Output sound from PC speaker.");
         puts("  MINIBOX beep [options]");
         puts("  MINIBOX beep --help|--version\r\n");
         puts("Options:");
         puts("  -f Frequency: Specify sound's frequency.");
         puts("  -l Length: Specify sound's length as milliseconds.");
         return 0;
      }
#endif

#ifdef VERSION
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
         puts("Invalid syntax.");
         return 1;
      }
   }

   sound(frequency);
   delay(length);
   nosound();
}
#endif