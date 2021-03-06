/*
 *  en.h - English Language header file
 *  Written by Ercan Ersoy.
 */

#define EN 1

#if LANGUAGE == EN
   #define STRING_CANNOT_COPY "%s can\'t copy.\r\n"
   #define STRING_CANNOT_CREATE "%s can\'t create.\r\n"
   #define STRING_CANNOT_MOVE "%s can\'t move.\r\n"
   #define STRING_CANNOT_REMOVE "%s can\'t remove.\r\n"
   #define STRING_DOES_NOT_DIRECTORY "%s doesn't directory.\r\n"
   #define STRING_INVALID_SYNTAX "Invalid syntax."
   #define STRING_MINIBOX_BEEP_DESCRIPTION "MINIBOX beep - Output sound from PC speaker."
   #define STRING_MINIBOX_BEEP_OPTIONS_1 "  -f <Frequency>: Specify frequency of sound."
   #define STRING_MINIBOX_BEEP_OPTIONS_2 "  -l <Length>: Length of specify sound as milliseconds."
   #define STRING_MINIBOX_BEEP_USAGE "  MINIBOX beep [Options]"
   #define STRING_MINIBOX_CAT_DESCRIPTION  "MINIBOX cat - Output specified content of file."
   #define STRING_MINIBOX_CAT_OPTIONS_1 "  -E: Ends are shown as \"$\"."
   #define STRING_MINIBOX_CAT_OPTIONS_2 "  -T: Tabs are shown as \"^I\"."
   #define STRING_MINIBOX_CAT_USAGE "  MINIBOX cat [Options] <File>"
   #define STRING_MINIBOX_CLEAR_DESCRIPTION "MINIBOX clear - Clear the terminal screen."
   #define STRING_MINIBOX_CP_USAGE "  MINIBOX cp <Source> <Destination>"
   #define STRING_MINIBOX_CP_DESCRIPTION "MINIBOX cp - Copy specified file or directory to specified directory."
   #define STRING_MINIBOX_COMMANDS "Minibox Commands:\r\n"
   #define STRING_MINIBOX_DATE_DESCRIPTION "MINIBOX date - Print or set system date and time."
   #define STRING_MINIBOX_DATE_OPTIONS_1 "-s       Set system date and time."
   #define STRING_MINIBOX_DATE_OPTIONS_2 "<Format> Specify fotmatted output string. String format is C printf type."
   #define STRING_MINIBOX_DATE_OPTIONS_3 "         Example: \"%d-%d-%d %d:%d%:%d\""
   #define STRING_MINIBOX_DATE_OPTIONS_4 "         Default format is ISO type."
   #define STRING_MINIBOX_DATE_USAGE "  MINIBOX date [-s] [Format]"
   #define STRING_MINIBOX_DESCRIPTION "MINIBOX - Linux commands on DOS"
   #define STRING_MINIBOX_ECHO_DESCRIPTION "MINIBOX echo - Prints specified messages."
   #define STRING_MINIBOX_ECHO_OPTIONS_1 "-e  Prints special characters. Message must be quoted."
   #define STRING_MINIBOX_ECHO_OPTIONS_2 "    Characters are: \\a \\b \\c \\e \\f \\r \\t \\v"
   #define STRING_MINIBOX_ECHO_OPTIONS_3 "-n  In addition, prints newline character."
   #define STRING_MINIBOX_ECHO_USAGE "  MINIBOX echo [Options] <Messages>"
   #define STRING_MINIBOX_LS_DESCRIPTION "MINIBOX ls - List directory contents."
   #define STRING_MINIBOX_LS_OPTIONS_1 "-1  Display output as one column."
   #define STRING_MINIBOX_LS_OPTIONS_2 "-a  Don't ignore \".\" and \"..\"."
   #define STRING_MINIBOX_LS_OPTIONS_3 "-l  Display long listing format."
   #define STRING_MINIBOX_LS_USAGE "  MINIBOX ls [Options] [File]"
   #define STRING_MINIBOX_MKDIR_DESCRIPTION "MINIBOX mkdir - Creates specified directories."
   #define STRING_MINIBOX_MKDIR_USAGE "  MINIBOX mkdir <Directories>"
   #define STRING_MINIBOX_MV_DESCRIPTION_1 "MINIBOX mv - Move and/or rename specified"
   #define STRING_MINIBOX_MV_DESCRIPTION_2 "file or directory to specified directory."
   #define STRING_MINIBOX_MV_USAGE "  MINIBOX mv Source Destination"
   #define STRING_MINIBOX_PWD_DESCRIPTION "MINIBOX pwd - Output current directory's name."
   #define STRING_MINIBOX_RM_DESCRIPTION "MINIBOX rm - Remove specified files."
   #define STRING_MINIBOX_RM_OPTION "-r  Remove specified directories and their contents recursively."
   #define STRING_MINIBOX_RM_USAGE "  MINIBOX rm [-r] <Items>"
   #define STRING_MINIBOX_RMDIR_DESCRIPTION "MINIBOX rmdir - Remove specified directories."
   #define STRING_MINIBOX_RMDIR_USAGE "  MINIBOX rmdir <Directories>"
   #define STRING_MINIBOX_SH_DESCRIPTION "MINIBOX sh - Minibox shell"
   #define STRING_MINIBOX_SH_EXIT "  In Minibox shell, type command exit \"exit\" to exit shell."
   #define STRING_MINIBOX_TIME_DESCRIPTION "MINIBOX time - Measure execution time of specified command as second."
   #define STRING_MINIBOX_TIME_USAGE "  MINIBOX time <Command> [Argument]"
   #define STRING_MINIBOX_USAGE "  MINIBOX <Command> [Arguments]"
   #define STRING_MINIBOX_VERSION "Minibox version: 0.7"
   #define STRING_NO_ENOUGH_ARGUMENTS "No enough arguments."
   #define STRING_NOTE "Note:"
   #define STRING_OPTION "Option:"
   #define STRING_OPTIONS "Options:"
   #define STRING_TOO_MUCH_ARGUMENTS "Too much arguments."
#endif
