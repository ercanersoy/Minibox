/******************************
 * MINIBOX rmdir Command File *
 ******************************/

#include "../minibox.h"

#ifdef COMMAND_RMDIR
int command_rmdir(int argc, char *argv[])
{
   int i = 2;

#ifdef HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts("MINIBOX rmdir - Removes specified directories.");
      puts("  MINIBOX rmdir directories");
      puts("  MINIBOX rmdir --help|--version");
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
      if(rmdir(argv[i]))
      {
         fprintf(stderr, "%s can\'t remove.\r\n", argv[i]);
      }
   }

   return 0;
}
#endif