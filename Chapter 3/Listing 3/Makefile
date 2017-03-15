# Makefile for a C program
# Mustafa Youldash, March 2017
# Macintosh OS X Version - The choice of champions!

CC = clang
OBJS = Program.o
CFLAGS = -std=c11 -Wall -Wextra

Program: $(OBJS)
	$(CC) -o Program $(OBJS) $(LIBS)

clean:
	@rm -f $(OBJS) Program
