CC := gcc
CFLAGS := -Wall -Wextra -pedantic
LIBS := -lm

all: solution

solution: main.o highest_prime.o
	$(CC) $(CFLAGS) $(LIBS) $^ -o $@

main.o: main.c highest_prime.h
	$(CC) $(CFLAGS) -c $< -o $@

prime.o: highest_prime.c highest_prime.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f *.o
