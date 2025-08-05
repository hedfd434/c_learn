#variables
#c compiler
CC = gcc

#linker
LINKER = $(CC) -Wall -g
#target
TARGET = main.exe

#dependencies (all files which are suppose to be used in final executable file)
GEN_DEP = main.c lib.c

#commands

#command testing variables
#$(TARGET): $(GEN_DEP)
#	$(LINKER) $(GEN_DEP) -o $(TARGET)

#command testing accesing first file in dependency chain for command
main.exe: main.c lib.c
	$(LINKER) $^ -o $@
	echo "Build successful at $(tail -f /var/log/syslog) , tail -f /var/log/syslog" >> build.log

#command that deletes all of the files wit *.exe and *.o types
clean:
	del *.exe

#comamnd that prints current time (does not work)
print_time:
    echo "Current time: $(date '+%Y-%m-%d %H:%M:%S')"

#comand that prints whole file
print_file:
	echo "displaying full content of file"
	type build.log