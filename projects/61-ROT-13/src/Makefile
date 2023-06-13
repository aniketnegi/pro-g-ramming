CC := gcc
CFLAGS := -Wall -Wextra -pedantic -Werror

all: solution

solution: main.o rot13.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.c rot13.h
	$(CC) $(CFLAGS) -c $< -o $@

rot13.o: rot13.c rot13.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f program *.o
