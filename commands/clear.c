/*
 *  clear.c - clear command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#ifdef COMMAND_CLEAR
int command_clear(int argc, char *argv[])
{
   #ifdef HELP
      if(!strcmp(argv[2], "--help"))
      {
         puts(STRING_MINIBOX_CLEAR_DESCRIPTION);
         puts("  MINIBOX clear");
         puts("  MINIBOX clear --help|--version\r\n");
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

   clrscr();

   return EXIT_SUCCESS;
}
#endif
