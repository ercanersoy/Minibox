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
      puts(STRING_MINIBOX_CP_COPY_SPECIFIED_FILE_OR_DIRECTORY_TO_SPECIFIED_DIRECTORY);
      puts(STRING_MINIBOX_CP_SOURCE_DESTINATION);
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
         fprintf(stderr, STRING_CAN_T_COPY, argv[2]);
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

   return 0;
}
#endif
