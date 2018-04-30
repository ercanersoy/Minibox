/******************************
 * MINIBOX rmdir Command File *
 ******************************/

#include "../minibox.h"

#if COMMAND_RMDIR
int command_rmdir(int argc, char *argv[])
{
   int i = 2;

#if HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts(MINIBOX_RMDIR_REMOVE_SPECIFIED_DIRECTORIES);
      puts(MINIBOX_RMDIR_DIRECTORIES);
      puts("  MINIBOX rmdir --help|--version");
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
      if(rmdir(argv[i]))
      {
         fprintf(stderr, CAN_T_REMOVE, argv[i]);
      }
   }

   return 0;
}
#endif
