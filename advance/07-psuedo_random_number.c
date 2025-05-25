#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // pseudo random numbers =  A set of values Elements that are statically random

    //set a seed
    srand(time(0));
    // set variables to calculate random or to store random value
    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    int dice3 = (rand() % 6) + 1;

    printf("%d\n", dice1);
    printf("%d\n", dice2);
    printf("%d\n", dice3);

    return 0;
}