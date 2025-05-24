#include <stdio.h>
#include <string.h>
int main() {
    // array of strings is actually a 2d array and because a string is already an array
    // char array[elements][how many byte does this element contains]
    //
    // char array[2][3] = {{'h', 'i', '!', '\0'},
    //                     {'d', 'r', 'i', '\0'}};
    // or
    //
    // char array[2][3] = {"hi!", "dri"};

    char string[] = "this is an array";

    char arrStrings[6][10] = {"this", "is", "array", "of", "strings"};
    // ADDS A STRING IN THE ARRAY
    strcpy(arrStrings[5], "okay?");

    // calculates how many string elements inside arrStrings[][]
    int numOfElements = sizeof(arrStrings)/sizeof(arrStrings[0]);

    for (int i = 0; i < numOfElements; i++) {
        printf("%s \n", arrStrings[i]);
    }
    return 0;
    
}