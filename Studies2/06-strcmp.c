//
// STRING LIBRARY      // #include <string.h>
//
#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Cat";
    char string2[] = "Dog";
    char string3[] = "MyCat";
    char string4[] = "MyCat";

    // strcmp()  compares 2 ascii character decimal value 
    // Example:
    // strcmp("Kurisu", "Mayuri") OUTPUT: 75 - 77 = -2  ; they are not equal    ; K < M or 75 < 77
    // Comparing 'K'(75) vs 'M'(77)
    // Result: 'Kurisu' < 'Mayuri' ❌ (Alpha world line)

    if (strcmp(string1, string2) == 0) {
        printf("%s = %s", string1, string2);
    } else if (strcmp(string1, string2) <= 0) {
        printf("%s < %s", string1, string2);
    } else if (strcmp(string1, string2) >= 0) {
        printf("%s > %s", string1, string2);
    } 

    int res = strcmp(string1, string2);
    printf("\nResult: Cat(C = 67) - Dog(D = 68) -> 67 - 68 = %d -> not equal ", res);

    // boolean use strcmp() == 0
    // retun true if string3 and string4 is the same characters in ascii decimal
    // A(65) - A(65) = 0 then its true
    // return false if string3 is greater or less than string4
    // A(65) - B(66) = -1 then its false

    if (strcmp(string3, string4) == 0) {
        printf("\ntrue");
    } else {
        printf("\nfalse");
    }
}