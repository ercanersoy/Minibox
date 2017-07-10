CC = gcc
CFLAGS = -O3 -s -c
LD = gcc
LDFLAGS = -O3 -s

all: minibox*

dos: minibox.exe

minibox.exe: main.o commands/beep.o commands/cat.o commands/cd.o commands/clear.o commands/cp.o commands/date.o commands/echo.o commands/ls.o commands/mkdir.o commands/mv.o commands/pwd.o commands/rm.o commands/rmdir.o commands/sh.o commands/time.o
	$(LD) $(LDFLAGS) $? -o $@

main.o: main.c
	$(CC) $(CFLAGS) $? -o $@

commands/beep.o: commands/beep.c
	$(CC) $(CFLAGS) $? -o $@

commands/cat.o: commands/cat.c
	$(CC) $(CFLAGS) $? -o $@

commands/cd.o: commands/cd.c
	$(CC) $(CFLAGS) $? -o $@
	
commands/clear.o: commands/clear.c
	$(CC) $(CFLAGS) $? -o $@
	
commands/cp.o: commands/cp.c
	$(CC) $(CFLAGS) $? -o $@

commands/date.o: commands/date.c
	$(CC) $(CFLAGS) $? -o $@

commands/echo.o: commands/echo.c
	$(CC) $(CFLAGS) $? -o $@

commands/ls.o: commands/ls.c
	$(CC) $(CFLAGS) $? -o $@

commands/mkdir.o: commands/mkdir.c
	$(CC) $(CFLAGS) $? -o $@

commands/mv.o: commands/mv.c
	$(CC) $(CFLAGS) $? -o $@

commands/pwd.o: commands/pwd.c
	$(CC) $(CFLAGS) $? -o $@

commands/rm.o: commands/rm.c
	$(CC) $(CFLAGS) $? -o $@

commands/rmdir.o: commands/rmdir.c
	$(CC) $(CFLAGS) $? -o $@

commands/sh.o: commands/sh.c
	$(CC) $(CFLAGS) $? -o $@

commands/time.o: commands/time.c
	$(CC) $(CFLAGS) $? -o $@

clean-obj:
	del main.o
	del commands\*.o
