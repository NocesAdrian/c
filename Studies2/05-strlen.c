//
// STRING LIBRARY      // #include <string.h>
//
#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "MyCat";
    char string2[] = "MyDog";

    // returns the string length of the string1, "MyCat" has 5 characters then it returns 5
    int len = strlen(string1); // output: 5
    printf("%d", len);
}