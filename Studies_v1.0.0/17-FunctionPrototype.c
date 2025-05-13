#include <stdio.h>

int add(int, int); 

// Function prototype
// ensures we get error if one of arguments are missing;
// int add(this is argument, this is argument);
// prevent unexpected behavior
// useful for debugging

int main()
{
    printf("%d\n", add(3,4));
}

int add(int x, int y)
{
    return x + y;
}