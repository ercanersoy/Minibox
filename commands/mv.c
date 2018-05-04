/***************************
 * MINIBOX mv Command File *
 ***************************/

#include "../minibox.h"

#if COMMAND_MV
int command_mv(int argc, char *argv[])
{
#if HELP
   if(argc == 3 && !strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_MV_MOVE_AND_OR_RENAME_SPECIFIED_FILE_OR_DIRECTORY_TO_SPECIFIED_DIRECTORY_1);
      puts(STRING_MINIBOX_MV_MOVE_AND_OR_RENAME_SPECIFIED_FILE_OR_DIRECTORY_TO_SPECIFIED_DIRECTORY_2);
      puts(STRING_MINIBOX_MV_SOURCE_DESTINATION);
      puts("  MINIBOX mv --help|--version");
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
      if(rename(argv[2], argv[3]))
      { 
         fprintf(stderr, "%s can\'t move.\r\n", argv[2]);
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
