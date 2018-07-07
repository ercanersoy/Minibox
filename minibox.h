/*
 *  minibox.h - Main header file
 *  Written by Ercan Ersoy.
 */

#include <conio.h>
#include <dirent.h>
#include <dos.h>
#include <errno.h>
#include <stdio.h>
#include <pc.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>
#include "config.h"
#include "lang\en.h"
#include "lang\tr.h"

// Command functions prototypes

#ifdef COMMAND_BEEP
int command_beep(int argc, char *argv[]);
#endif

#ifdef COMMAND_CAT
int command_cat(int argc, char *argv[]);
#endif

#ifdef COMMAND_CD
int command_cd(int argc, char *argv[]);
#endif

#ifdef COMMAND_CLEAR
int command_clear(int argc, char *argv[]);
#endif

#ifdef COMMAND_CP
int command_cp(int argc, char *argv[]);
#endif

#ifdef COMMAND_DATE
int command_date(int argc, char *argv[]);
#endif

#ifdef COMMAND_ECHO
int command_echo(int argc, char *argv[]);
#endif

#if HELP
#ifdef COMMAND_HELP
int command_help(int argc, char *argv[]);
#endif
#endif

#ifdef COMMAND_LS
int command_ls(int argc, char *argv[]);
#endif

#ifdef COMMAND_MKDIR
int command_mkdir(int argc, char *argv[]);
#endif

#ifdef COMMAND_MV
int command_mv(int argc, char *argv[]);
#endif

#ifdef COMMAND_PWD
int command_pwd(int argc, char *argv[]);
#endif

#ifdef COMMAND_RM
int command_rm(int argc, char *argv[]);
#endif

#ifdef COMMAND_RMDIR
int command_rmdir(int argc, char *argv[]);
#endif

#ifdef COMMAND_SH
int command_sh(int argc, char *argv[]);
#endif

#ifdef COMMAND_TIME
int command_time(int argc, char *argv[]);
#endif

// Version function prototype

#ifdef VERSION
void version(void);
#endif
