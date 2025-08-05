main.exe: main.c lib.c
	gcc main.c lib.c -o main.exe
clean_1:
	del main.exe
compile_1:
	gcc main.c -o main.exe
test_command_1:
	gcc -c main.c
test_command_2:
	gcc -c lib.c
test_command_3:
	gcc main.o lib.o -o main.exe