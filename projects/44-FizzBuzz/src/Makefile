CC := gcc
CFLAGS := -Wall -Wextra -pedantic

all: solution

solution: main.o fizzbuzz.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.c fizzbuzz.h
	$(CC) $(CFLAGS) -c $< -o $@

fizzbuzz.o: fizzbuzz.c fizzbuzz.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f program *.o
