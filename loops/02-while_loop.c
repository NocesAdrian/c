#include <stdio.h>
#include <string.h>

int main() {

    // while loop = repeats section of code possible unlimited times.
    // keyword: while some condition remains true
    // a while loop might not execute at all

    char name[25];

    printf("\nwhat is ur name? ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0) {
        
        printf("you did not enter your name..");
        printf("\nwhat is ur name? ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';

    }

    printf("hello %s", name);

    return 0;
}