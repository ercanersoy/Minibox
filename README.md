# Minibox

Small Linux commands for resource limited systems

Copyright (C) 2017-2018 Ercan Ersoy
<br>
This software is licensed under GNU General Public License version 3.

## Compile

Compile:

The program must be compiled with GCC.

For compiling, Makefile directive for DOS: make dos
For DOS, you must use DJGPP.

## Usage

    MINIBOX Command [Arguments]
    MINIBOX --help|--version

## Commands

* beep
* cat
* cd
* clear
* cp
* date
* echo
* help
* ls
* mkdir
* mv
* pwd
* rm
* rmdir
* sh
* time

## Changelog

*  **0.4 (04-30-2018):** Switch GNU GPL version 2.0 to GNU GPL version
   3.0 for license. Fix typos. Change directory tree and add language
   files. Add language configuration to config.h. Translate to Turkish.
   Add changelog.

*  **0.3 (07-29-2017):** Fix bugs on pwd, rm, sh and time commands.
   Delete excess code on date command.

*  **0.2 (06-16-2017):** Fix delete not properly bug on rm.c. Fix wrong
   #ifdef preprocessors and fix version bug in main.c. Source codes
   minor change. Enhance Makefile file. Remove executable file. Add
   help command.

*  **0.1 (04-25-2017):** Create first version.

## Note

Linux is a registered trademark of Linus Tovarlds.
