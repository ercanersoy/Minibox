/*****************************
 * MINIBOX time Command File *
 *****************************/

#include "../minibox.h"

#define MAX_COMMAND_LINE_LENGTH 1024

#ifdef COMMAND_TIME
int command_time(int argc, char *argv[])
{
   int i = 0;
   char *command_line = alloca(MAX_COMMAND_LINE_LENGTH);
   struct timeval start;
   struct timeval end;
   long double measured_time = 0.0;

#ifdef HELP
   if(argc == 3 && !strcmp(argv[2], "--help"))
   {
      puts("MINIBOX time - Measure specified command's execution time as second.");
      puts("  MINIBOX time command [argument]");
      puts("  MINIBOX time --help|--version");
      return 0;
   }
#endif

#ifdef VERSION
   if(argc == 3 && !strcmp(argv[2], "--version"))
   {
      version();
      return 0;
   }
#endif

   if(argc > 2)
   {
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

      printf("%.6llf", measured_time);
   }
}
#endif