/******************************
 * Minibox clear Command File *
 ******************************/

#include "../minibox.h"

#if COMMAND_CLEAR
int command_clear(int argc, char *argv[])
{
#if HELP
      if(!strcmp(argv[2], "--help"))
      {
         puts("MINIBOX clear - Output sound from PC speaker.");
         puts("  MINIBOX clear");
         puts("  MINIBOX clear --help|--version\r\n");
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

   clrscr();

   return 0;
}
#endif
