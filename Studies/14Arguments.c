#include <stdio.h>

// functions cant see inside one another so this one come in handy

// Hey main() i need two parameters in my arguments name and age 
void Birthday(char name[], int age)
{
    printf("happy birthday Dear %s\n", name);
    printf("you are now %d years old!\n", age);
}

int main()
{
    // okay Birthday() here you go, your name and age
    char name[] = "Bro";
    int age = 13;

    // here is your name and age
    Birthday(name, age);
}