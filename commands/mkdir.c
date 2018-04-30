/******************************
 * MINIBOX mkdir Command File *
 ******************************/

#include "../minibox.h"

#ifdef COMMAND_MKDIR
int command_mkdir(int argc, char *argv[])
{
   int i = 2;

#if HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts(MINIBOX_MKDIR_CREATES_SPECIFIED_DIRECTORIES);
      puts(MINIBOX_MKDIR_DIRECTORIES);
      puts("  MINIBOX mkdir --help|--version");
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
      if(mkdir(argv[i], S_IWUSR))
      {
         fprintf(stderr, CAN_T_CREATE, argv[i]);
      }
   }

   return 0;
}
#endif
