/***************************
 * MINIBOX cp Command File *
 ***************************/

#include "../minibox.h"

#if COMMAND_CP
int command_cp(int argc, char *argv[])
{
#if HELP
   if(argc == 3 && !strcmp(argv[2], "--help"))
   {
      puts(MINIBOX_CP_COPY_SPECIFIED_FILE_OR_DIRECTORY_TO_SPECIFIED_DIRECTORY);
      puts(MINIBOX_CP_SOURCE_DESTINATION);
      puts("  MINIBOX cp --help|--version");
      return 0;
   }
#endif

#if VERSION
   if(argc == 3 && !strcmp(argv[2], "--version"))
   {
      version();
      return 0;
   }
#endif

   if(argc == 4)
   {
      if(link(argv[2], argv[3]))
      { 
         fprintf(stderr, CAN_T_COPY, argv[2]);
      }
   }
   else if(argc < 4)
   {
      fputs(NO_ENOUGH_ARGUMENTS, stderr);
   }
   else
   {
      fputs(TOO_MUCH_ARGUMENTS, stderr);
   }

   return 0;
}
#endif
