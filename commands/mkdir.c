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
      puts("MINIBOX mkdir - Creates specified directories.");
      puts("  MINIBOX mkdir directories");
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
         fprintf(stderr, "%s can't create.\r\n", argv[i]);
      }
   }

   return 0;
}
#endif
