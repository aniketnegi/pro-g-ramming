CC := gcc
CFLAGS := -Wall -Wextra -pedantic

all: solution

solution: main.o char_count.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.c char_count.h
	$(CC) $(CFLAGS) -c $< -o $@

prime.o: char_count.c char_count.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f *.o
