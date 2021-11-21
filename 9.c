/*
Work 09: Construction Work

Oct 14, 2021
Due: Friday 10/15 8:00am
GitHub Submission Link: git@github.com:mks65/09_construction.git
Task at hand

    Create a struct that has at least 2 data members, one must be a string.
    Don’t just combine random things, make it meaningful (like food and price, athlete and associated statistic, Pokemon and something about Pokemon ..)
    Write a function that prints out variables of your structs type in a reasonable way.
    Write a function that creates a new struct in heap memory, it should have paramteters appropraite to your struct.
    Write a main function that tests all these things.
        Have your program randomly assign some part of your struct each time it is run.
    Have meaningful output.
    DONT FORGET A MAKEFILE
    You can find the demo code from class here: https://github.com/mks65/dwsource/blob/main/structy.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct tourism {char country[50]; int nyers;};

struct tourism * make_corroborate(char * sovereign_state, int num_of_nyers) {
	struct tourism *b = malloc(sizeof(struct tourism));
	strcpy(b->country, sovereign_state);
	b->nyers = num_of_nyers;
	return b;
}

void print_tourism(struct tourism *c) {
	printf("In %s there are %d New Yorkers right now.\n",c->country,c->nyers);
}

int main() {
	srand(time(NULL));
	long x = -1;
	while (x < 0) x = rand();
	int y = x / 100000;
	struct tourism *d = make_corroborate("Australia",y);
	print_tourism(d);
	free(d);	
}
