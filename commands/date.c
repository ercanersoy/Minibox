/*
 *  date.c - date command source file
 *  Written by Ercan Ersoy.
 */

#include "../minibox.h"

#if COMMAND_DATE
int command_date(int argc, char *argv[])
{
   time_t datetime_time_t;
   struct tm *datetime_tm;
   struct date set_date;
   struct time set_time;
   char formatted_string[DATE_AND_TIME_STRING_MAX];

#if HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts(STRING_MINIBOX_DATE_DESCRIPTION);
      puts(STRING_MINIBOX_DATE_USAGE);
      puts("  MINIBOX date --help|--version\r\n");
      puts(STRING_OPTIONS);
      puts(STRING_MINIBOX_DATE_OPTIONS_1);
      puts(STRING_MINIBOX_DATE_OPTIONS_2);
      puts(STRING_MINIBOX_DATE_OPTIONS_3);
      puts(STRING_MINIBOX_DATE_OPTIONS_4);
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

   datetime_time_t = time(NULL);

   if(argc < 3)
   {
      puts(ctime(&datetime_time_t));
	  return 0;
   }
   else
   {
      if(!strcmp(argv[2], "-s"))
      {
         sscanf(argv[3], "%4hu-%2hhu-%2hhu %2hhu:%2hhu:%2hhu", &(set_date.da_year), &(set_date.da_mon), &(set_date.da_day), &(set_time.ti_hour), &(set_time.ti_min), &(set_time.ti_sec));
		 
		 printf("%d:%d:%d", set_date.da_year, set_date.da_mon, set_date.da_day);
		 
		 setdate(&set_date);
		 settime(&set_time);
		 
         return 0;
      }
      else
      {
         datetime_tm = localtime(&datetime_time_t);
         strftime(formatted_string, DATE_AND_TIME_STRING_MAX, argv[2], datetime_tm);
         puts(formatted_string);
         return 0;
      }
   }
}
#endif
