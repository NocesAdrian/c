#include <stdio.h>

int main() {
    char greet[] = {'h', 'i','\n', '\0'};
    printf("%s", greet);

    // or
    char greeting[] = "hi"; // "" is a pointer to the first element in the array
    printf("%s", greeting);
}