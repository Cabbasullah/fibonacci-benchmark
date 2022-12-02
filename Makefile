
all: mylib.o
mylib.o: mylib/mylib.c
	gcc -o mylib.o -c mylib/mylib.c

test:
	gcc -o main_test.out main_test.c mylib.o 
iterativeb-t:
	gcc -o main_b_time_iterative.out main_b_time_iterative.c mylib.o 
iterativeb-sp:
	gcc -o main_b_space_iterative.out main_b_space_iterative.c mylib.o
recursiveb-t:
	gcc -o main_b_time_recursive.out main_b_time_recursive.c mylib.o 
recursiveb-sp:
	gcc -o main_b_space_recursive.out main_b_space_recursive.c mylib.o

clear:
	rm -rf *.o
	rm -rf *.out