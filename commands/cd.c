/*
 *  cd.c - cd command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#if COMMAND_CD
int command_cd(int argc, char *argv[])
{
   if(argc == 3)
   {
      if(chdir(argv[2]))
      {
         fprintf(stderr, STRING_DOES_NOT_DIRECTORY, argv[3]);
         return 1;
      }
   }
   
   return 0;
}
#endif
