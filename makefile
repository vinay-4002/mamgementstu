main.o: main.c
	gcc -c main.c

print.o: print.c
	gcc -c print.c

delete.o: delete.c
	gcc -c delete.c

insert.o: insert.c
	gcc -c insert.c

file.o: file.c
	gcc -c file.c

other.o: other.c
	gcc -c other.c

exe: main.o print.o delete.o insert.o file.o other.o
	gcc main.o print.o delete.o insert.o file.o other.o -o exe

clean:
	@echo "Cleaning up"
	@rm -f *.o exe

.PHONY: clean
