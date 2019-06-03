# Minibox

Small Linux commands for resource limited systems

Copyright (C) 2017-2019 Ercan Ersoy
<br>
This software is licensed under GNU General Public License version 2
and GNU General Public License version 3.

## Compile

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

*  0.5 (06-03-2019):
  * Switch to dual licencing as GNU GPL version 2.0 and GNU GPL
    version 3.0 for license.
  * Updated language strings at header files.
  * Rename strings' macros' name.
  * Update source files for standardization.
  * Fix wrong default language configuration at "config.h" file.
  * Add ".o" pattern to ".gitignore".
  * Change directory tree for binaries.
  * Build settings change to -01 optimisation and update executable
    files.
  * Update "README"s and "README.md".

*  0.4 (04-30-2018):
  * Switch GNU GPL version 2.0 to GNU GPL version 3.0 for license.
  * Fix typos.
  * Change directory tree and add language files.
  * Add language configuration to "config.h".
  * Translate to Turkish Language.
  * Add changelog.

*  0.3 (07-29-2017):
  * Fix bugs on pwd, rm, sh and time commands.
  * Delete excess code on date command.

*  0.2 (06-16-2017):
  * Fix delete not properly bug on rm command.
  * Fix wrong #ifdef preprocessors and fix version bug in main module.
  * Source codes minor change.   
  * Remove executable file.
  * Add help command.
  * Enhance Makefile file.

*  0.1 (04-25-2017):
  * Create first version.

## Note

Linux is a registered trademark of Linus Tovarlds.
