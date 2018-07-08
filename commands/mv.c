/*
 *  mv.c - mv command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#ifdef COMMAND_MV
int command_mv(int argc, char *argv[])
{
   #ifdef HELP
   if(argc == 3 && !strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_MV_DESCRIPTION_1);
      puts(STRING_MINIBOX_MV_DESCRIPTION_2);
      puts(STRING_MINIBOX_MV_USAGE);
      puts("  MINIBOX mv --help|--version");
      return EXIT_SUCCESS;
   }
   #endif

   #ifdef VERSION
   if(argc == 3 && !strcmp(argv[2], "--version"))
   {
      version();
      return EXIT_SUCCESS;
   }
   #endif

   if(argc == 4)
   {
      if(rename(argv[2], argv[3]))
      { 
         fprintf(stderr, STRING_CANNOT_MOVE, argv[2]);
      }
   }
   else if(argc < 4)
   {
      fputs(STRING_NO_ENOUGH_ARGUMENTS, stderr);
   }
   else
   {
      fputs(STRING_TOO_MUCH_ARGUMENTS, stderr);
   }

   return EXIT_SUCCESS;
}
#endif
