/*
 *  time.c - time command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#ifdef COMMAND_TIME
int command_time(int argc, char *argv[])
{
   int i = 0;
   char *command_line;
   struct timeval start;
   struct timeval end;
   long double measured_time = 0.0;

   #ifdef HELP
   if(argc == 3 && !strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_TIME_DESCRIPTION);
      puts(STRING_MINIBOX_TIME_USAGE);
      puts("  MINIBOX time --help|--version");
      return EXIT_SUCCESS;
   }
   #endif

   #if VERSION
   if(argc == 3 && !strcmp(argv[2], "--version"))
   {
      version();
      return EXIT_SUCCESS;
   }
   #endif

   if(argc > 2)
   {
      command_line = malloc(MAX_COMMAND_LINE_LENGTH);

      strcpy(command_line, argv[2]);

      if(argc > 3)
      {
         for(i = 3; i < argc; i++)
         {
            strcat(command_line, " ");
            strcat(command_line, argv[i]);
         }
      }

      gettimeofday(&start, NULL);
      system(command_line);
      gettimeofday(&end, NULL);
      measured_time = (long double)(((end.tv_sec - start.tv_sec) * 1000000 + end.tv_usec) - start.tv_usec) / 1000000;

      printf("%.6Lf", measured_time);
      
      free(command_line);
   }
}
#endif
