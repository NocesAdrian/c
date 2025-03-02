#include <stdio.h>
#include <string.h>

int main()
{
    // strlen() -  Returns the length of a string (excluding \0).
    int len = strlen("Hello");
    printf("%d\n", len);

    // strcpy() – Copies one string to another.
    char one[10];
    char another[10];
    strcpy(one, "Hello"); // copy "hello" to a new reference
    strcpy(another, one); // copy one value to another without changing one value
    printf("%s\n", another);
    printf("%s\n", one);

    // strncpy() – Copies a specified number of characters

    // strcat() – Concatenates (appends) two strings.

    // strncat() – Concatenates a limited number of characters



    // String Comparison Functions

    // strcmp() – Compares two strings (returns 0 if equal)

    // strncmp() – Compares a limited number of characters




    // String Searching Functions
    
    // strchr() – Finds the first occurrence of a character.

    // strrchr() – Finds the last occurrence of a character

    // strstr() – Finds a substring inside a string.




    // String Tokenization

    // strtok() – Splits a string using delimiters.






    // Memory Manipulation Functions

    // memcpy() – Copies a block of memory

    // memmove() – Copies memory safely (handles overlap)

    // memset() – Fills memory with a specific value

    // memcmp() – Compares two memory blocks

}