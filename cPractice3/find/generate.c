/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[]) //User's input in order to run the program
{
    // TODO: if users argument count is less or exceeds  2 and 3 then return 1 and print text
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n"); 
        return 1;
    }

    // TODO: changest the string input value to an integer
    int n = atoi(argv[1]);

    // TODO: if the the third argument exist then run the seed generator based on the second argument function.
    if (argc == 3)
    {
        srand48((long int) atoi(argv[2]));
    }
    else // else don't
    {
        srand48((long int) time(NULL));
    }

    // TODO: prints a randon number that is less than the limit define on top
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}