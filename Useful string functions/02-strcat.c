//
// STRING LIBRARY      // #include <string.h>
//

#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "MyCat";
    char string2[10] = "MyDog"; // when changing value of an array of characters its important to consider adding a byte size

    // appends string1 to the end of string 2  // string2 is now = "MyDogMyCat"
    strcat(string2, string1);       
    printf("%s\n", string2);

    char string3[] = "MyCat";
    char string4[] = "MyDog";

    // appends a given amount of characters from string3 to the end of string4  // output: "MyDogMyC"
    strncat(string4, string3, 3);   // 3 is the given amount of character
    printf("%s", string4);
}