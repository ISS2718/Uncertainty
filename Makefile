division: division.c
	gcc -o division division.c 

multiply: multiply.c
	gcc -o multiply multiply.c

compare: compare.c
	gcc -o compare compare.c

run_div: division
	./division

run_mul: multiply
	./multiply

run_comp: compare
	./compare