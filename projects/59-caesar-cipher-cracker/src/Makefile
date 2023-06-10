CC := gcc
CFLAGS := -Wall -Wextra -pedantic -Werror

all: solution

solution: main.o caesar.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.c caesar.h
	$(CC) $(CFLAGS) -c $< -o $@

caesar.o: caesar.c caesar.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f program *.o
