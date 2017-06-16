all:
	gcc -O3 -s -c main.c
	gcc -O3 -s -c commands/beep.c -o commands/beep.o
	gcc -O3 -s -c commands/cat.c -o commands/cat.o
	gcc -O3 -s -c commands/cd.c -o commands/cd.o
	gcc -O3 -s -c commands/clear.c -o commands/clear.o
	gcc -O3 -s -c commands/cp.c -o commands/cp.o
	gcc -O3 -s -c commands/date.c -o commands/date.o
	gcc -O3 -s -c commands/echo.c -o commands/echo.o
	gcc -O3 -s -c commands/ls.c -o commands/ls.o
	gcc -O3 -s -c commands/mkdir.c -o commands/mkdir.o
	gcc -O3 -s -c commands/mv.c -o commands/mv.o
	gcc -O3 -s -c commands/pwd.c -o commands/pwd.o
	gcc -O3 -s -c commands/rm.c -o commands/rm.o
	gcc -O3 -s -c commands/rmdir.c -o commands/rmdir.o
	gcc -O3 -s -c commands/sh.c -o commands/sh.o
	gcc -O3 -s -c commands/time.c -o commands/time.o
	gcc -O3 -s main.o commands/*.o -o minibox.exe
	del main.o
	del commands\*.o
	upx -9 minibox.exe