#
# Makefile
#
# Computer Science 50
# Problem Set 3
#

fifteen: fifteen.c
	gcc -ggdb -std=c99 -Wall -Werror -o fifteen fifteen.c -lcs50 -lm

clean:
	rm -f *.o a.out core fifteen
