# Minibox

Small Linux commands for resource limited systems

Copyright (C) 2017-2020 Ercan Ersoy

This software is licensed under GNU General Public License version 2 and GNU General Public License version 3.

## Compile

The program must be compiled with GCC.

### MS-DOS, FreeDOS, etc.

You must use DJGPP.

You should be compiled this command line is given below.

    make dos

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

### 0.6 (05-09-2020):
* Updated "README.md" file and "README" files including changelog of previous versions.
* Deleted "binaries" directory.
* Updated "Makefile" file.
* Updated ".gitignore" file.
* Converted forgotten files with LF line ending to CR/LF line ending.
* Updated language header files.
* Updated verison information.

### 0.5 (06-03-2019):
* Switched to dual licencing as GNU GPL version 2.0 and GNU GPL version 3.0.
* Updated language strings at header files.
* Renamed macro name of strings.
* Updated header and source files for standardization.
* Fixed wrong default language configuration at "config.h" file.
* Added ".o" pattern to ".gitignore" file.
* Changed directory tree for binaries.
* Changed build settings to -01 optimisation.
* Updated executable file of this software.
* Updated "README" files and "README.md" file.
* Updated verison information.
* Updated changelog.

### 0.4 (04-30-2018):
* This license of this software switched GNU GPL version 2.0 to GNU GPL version 3.0.
* Fixed typing errors.
* Changed directory tree.
* Added language files.
* Added language configuration to "config.h" file.
* Translated to Turkish Language.
* Updated verison information.
* Added changelog.

### 0.3 (07-29-2017):
* Fixed bugs on pwd, rm, sh and time commands.
* Deleted spare code on date command.
* Added executable file of this software.
* Updated version information.

### 0.2 (06-16-2017):
* Fixed deleting not properly bug on rm command.
* Fixed wrong #ifdef preprocessors and fix version bug in main module.
* Changed code as minor of Minibox.
* Removed executable file of this software.
* Added help command.
* Enhanced Makefile file.
* Updated verison information.

###  0.1 (04-25-2017):
* Initial version

## Notes

* FreeDOS is a registered trademark of Jim Hall.
* Linux is a registered trademark of Linus Tovarlds.
* MS-DOS is a registered trademark of Microsoft Corporation.
