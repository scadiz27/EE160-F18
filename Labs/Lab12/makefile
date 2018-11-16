# Exploring pointers
swap: swap.o swaptest.o
	cc swap.o swaptest.o -o swap

# Exploring using pointers
swapbig: driver1.o swap.o
	cc driver1.o swap.o -o swapbig
	
# Exploring how to debug decision statements.
reorder: driver2.o swap.o
	cc driver2.o swap.o -o reorder

# source file dependencies

swaptest.o: swap.h

swapbig.o: swap.h

reorder.o: swap.h

# utility targets

clean:
	rm -f *.o

real_clean: clean
	rm -f swaptest swapbig reorder a.out core./s