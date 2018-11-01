# Exploring decision-making statements. 
mygrader: driver1.o grader.o
	cc driver1.o grader.o -o mygrader

# Exploring decision-making statements. 
mygrader2: driver2.o grader.o
	cc driver2.o grader.o -o mygrader2
	
# Exploring how to debug decision statements.
countgrades: countgrades.o
	cc countgrades.o -o countgrades

# source file dependencies

mygrader.o: grader.h

mygrader2.o: grader.h

grader.o: grader.h


# utility targets

clean:
	rm -f *.o

real_clean: clean
	rm -f mygrader mygrader2 countgrades a.out core