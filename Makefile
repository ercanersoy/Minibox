all:
	gcc -O3 -c main.c
	gcc -O3 -c commands/beep.c -o commands/beep.o
	gcc -O3 -c commands/cat.c -o commands/cat.o
	gcc -O3 -c commands/cd.c -o commands/cd.o
	gcc -O3 -c commands/clear.c -o commands/clear.o
	gcc -O3 -c commands/cp.c -o commands/cp.o
	gcc -O3 -c commands/date.c -o commands/date.o
	gcc -O3 -c commands/echo.c -o commands/echo.o
	gcc -O3 -c commands/ls.c -o commands/ls.o
	gcc -O3 -c commands/mkdir.c -o commands/mkdir.o
	gcc -O3 -c commands/mv.c -o commands/mv.o
	gcc -O3 -c commands/pwd.c -o commands/pwd.o
	gcc -O3 -c commands/rm.c -o commands/rm.o
	gcc -O3 -c commands/rmdir.c -o commands/rmdir.o
	gcc -O3 -c commands/sh.c -o commands/sh.o
	gcc -O3 -c commands/time.c -o commands/time.o
	gcc -O3 main.o commands/*.o -o minibox.exe
	del main.o
	del commands\*.o
	upx -9 minibox.exe