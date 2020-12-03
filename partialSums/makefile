CFLAGS= -ansi -Wall -pedantic

all: partialSums.c partialSums.h
	@gcc $(CFLAGS) partialSums.c -o partialSums
	@echo partialSums.c has compiled successfully. 
	@echo To run using input and output files use command \"make run\".
	

run: partialSums *.txt
	@./partialSums < inputs/input1.txt > output.txt
	@./partialSums < inputs/input2.txt >> output.txt
	@./partialSums < inputs/input3.txt >> output.txt
	@./partialSums < inputs/input4.txt >> output.txt
	@echo All done.
	@echo Check output.txt to see the output.
clean: *.o
	rm -f *.o
