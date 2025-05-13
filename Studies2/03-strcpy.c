//
// STRING LIBRARY      // #include <string.h>
//
#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "MyCat";
    char string2[] = "MyDog";

    // copy the value of string1 to string2 now string2 = "MyCat"
    // output: "MyCat"
    strcpy(string2, string1);
    printf("%s\n", string2);


    char string3[] = "MyCat";
    char string4[] = "MyDog";

    // copy a given amount of characters from string3 to string4 now string2 = "MyCog"
    // output: "MyCog"
    // where "MyC" is from string3 and "og" is the last character from string4
    strncpy(string4, string3, 3); // 3 is given amount of character
    printf("%s", string4);
}