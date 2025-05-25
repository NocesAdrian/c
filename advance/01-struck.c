#include <stdio.h>
#include <string.h>

// structs just lets you group variables related to each other like class OOP
struct Players {
    char name[25];
    int score;
};

int main() {
    // struct = collection of related members "variables"
    //          they can be different data types int, float, double, char etc
    //          listed under one name in a block of memory
    //          VERY similar to classes in other OOP languages (but no methods)

    // like classes
    // struct is a template to create an object

    // creates object player1
    struct Players player1;
    // creates object player2
    struct Players player2;
    // yahhh like a class
    
    // we can assign value like this
    strcpy(player1.name, "lacia");
    strcpy(player2.name, "atri");
    player1.score = 9;
    player2.score = 9;

    printf("player1: %s score: %d\n", player1.name, player1.score);
    printf("player2: %s score: %d\n", player2.name, player2.score);


    return 0;
}