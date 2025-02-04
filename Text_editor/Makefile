# file: 
#
# Note that this make file uses "-g" to compile and link "debug".
#

# define a target for the application
#
all: fuze.exe

# define a target to link the application
#
fuze.exe: fuze.o
	g++ -g -L. -lm fuze.o -lmylib  -o fuze.exe

# define targets to compile the source code
#
fuze.o: fuze.cc example.h Makefile
	g++ -g -c fuze.cc -o fuze.o

# define a target to clean the directory
#
clean:
	rm -f fuze.o fuze.exe *~

#
# end of file
