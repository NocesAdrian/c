//
// STRING LIBRARY      // #include <string.h>
//
#include <stdio.h>
#include <string.h>

// strset()
// since it was not standard function for c strng.h library anymore then lets just imitate it
//
char *strset(char *str, int c) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = (char)c;
    }
    return str;
}

// strnset()
// since it was not standard function for c strng.h library anymore then lets just imitate it
//

char *strnset(char *str, int c, size_t n) {
    for (size_t i = 0; i < n && str[i] != '\0'; i++) {
        str[i] = (char)c;
    }
    return str;
}

int main() {
    char string1[] = "MyCat";
    char string2[] = "MyDog";

    // set all characters of string1 to a given a character
    strset(string1, '?');   // output: "?????"
    printf("%s\n", string1);

    // set the first range of n characters on string2 to a given character
    // output: ???og
    strnset(string2, '?', 3);   // 3 is the given range and '?' is the given character
    printf("%s", string2);
}