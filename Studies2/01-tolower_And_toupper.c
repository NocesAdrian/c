//
// STRING LIBRARY      // #include <string.h>
//

#include <stdio.h>
#include <ctype.h>

int main() {

    //
    //
    // strlwr(string1); And strupr(string2); does not work anymore in newer version of c and compilers instead we use
    // ctype.h library using its functions tolower() and toupper()
    //
    //

    char string1[] = "Adrian";
    char string2[] = "Noces";
    
    // converts string1 to lowercase
    for (int i = 0; string1[i] != '\0'; i++) {
        string1[i] = tolower(string1[i]);
    }

    // converts string2 to uppercase
    for (int i = 0; string2[i] != '\0'; i++) {
        string2[i] = toupper(string2[i]);
    }

    printf("%s ", string1);
    printf("%s", string2);
}