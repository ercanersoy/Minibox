/*****************************
 * Minibox date Command File *
 *****************************/

#include "../minibox.h"

#define DATE_AND_TIME_STRING_MAX 80

#ifdef COMMAND_DATE
int command_date(int argc, char *argv[])
{
   time_t datetime_time_t;
   struct tm *datetime_tm;
   struct date set_date;
   struct time set_time;
   char formatted_string[DATE_AND_TIME_STRING_MAX];

#ifdef HELP
   if(!strcmp(argv[2], "--help"))
   {
      puts("MINIBOX date - Print or set system date and time.");
      puts("  MINIBOX date [-s] [Format]");
      puts("  MINIBOX date --help|--version\r\n");
      puts("Options:");
      puts("-s  Set system date and time.");
      puts("Format  Specify fotmatted output string. String format is C type.");
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

   datetime_time_t = time(NULL);

   if(argc < 3)
   {
      puts(ctime(&datetime_time_t));
	  return 0;
   }
   else if(argc >= 3)
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