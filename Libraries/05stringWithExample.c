#include <stdio.h>
#include <string.h>

int main()
{
    // String Manipulation Functions
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    
    // strcpy() - Copies one string to another
    strcpy(str1, "Hello, ");  // Copies "Hello, " into str1
    printf("str1 after strcpy: %s\n", str1);
    
    // strcat() - Concatenates two strings
    strcat(str1, str2);  // Concatenates "World!" to str1
    printf("str1 after strcat: %s\n", str1);
    
    // strcmp() - Compares two strings (returns 0 if equal)
    int result = strcmp(str1, "Hello, World!"); // Compares str1 with "Hello, World!"
    printf("strcmp result: %d\n", result);  // Output: 0 (strings are equal)
    
    // strlen() - Returns the length of a string (excluding '\0')
    int len = strlen(str1);  // Length of "Hello, World!"
    printf("Length of str1: %d\n", len);  // Output: 13

    // strchr() - Finds the first occurrence of a character
    char *ch = strchr(str1, 'o');  // Finds the first occurrence of 'o' in str1
    if (ch != NULL) {
        printf("Found 'o' at position: %ld\n", ch - str1);  // Output: Found 'o' at position: 4
    } else {
        printf("'o' not found\n");
    }

    // strrchr() - Finds the last occurrence of a character
    char *chLast = strrchr(str1, 'o');  // Finds the last occurrence of 'o' in str1
    if (chLast != NULL) {
        printf("Last 'o' found at position: %ld\n", chLast - str1);  // Output: Last 'o' found at position: 8
    } else {
        printf("'o' not found\n");
    }

    // strstr() - Finds a substring inside a string
    char *subStr = strstr(str1, "World");  // Finds "World" inside str1
    if (subStr != NULL) {
        printf("Found substring 'World' at position: %ld\n", subStr - str1);  // Output: Found substring 'World' at position: 7
    } else {
        printf("'World' not found\n");
    }

    // strtok() - Splits a string into tokens
    char str3[] = "Hello, how are you?";
    const char *delim = " ,?";  // Delimiters: space, comma, and question mark
    char *token = strtok(str3, delim);
    
    printf("Tokens:\n");
    while (token != NULL) {
        printf("Token: %s\n", token);  // Output: Token: Hello, Token: how, Token: are, Token: you
        token = strtok(NULL, delim);  // Get the next token
    }

    // strncat() - Concatenates a limited number of characters
    strncat(str1, " Have a nice day!", 10);  // Concatenate first 10 chars
    printf("str1 after strncat: %s\n", str1);  // Output: Hello, World! Have a n

    // strncpy() - Copies a limited number of characters
    char dest[20];
    strncpy(dest, str1, 5);  // Copy first 5 characters of str1 into dest
    dest[5] = '\0';  // Null terminate the string
    printf("dest after strncpy: %s\n", dest);  // Output: Hello

    // strncmp() - Compares a limited number of characters
    int cmpResult = strncmp(str1, "Hello, World!", 5);  // Compare first 5 chars of str1 with "Hello"
    printf("strncmp result: %d\n", cmpResult);  // Output: 0 (first 5 characters are equal)

    // memcmp() - Compares two blocks of memory
    char mem1[] = "abcdef";
    char mem2[] = "abcdeg";
    int memCmpResult = memcmp(mem1, mem2, 5);  // Compare first 5 bytes of mem1 and mem2
    printf("memcmp result: %d\n", memCmpResult);  // Output: -1 (mem1 < mem2)

    // memcpy() - Copies a block of memory
    char memDest[10];
    memcpy(memDest, mem1, 6);  // Copy first 6 bytes of mem1 into memDest
    printf("memDest after memcpy: %s\n", memDest);  // Output: abcdef

    // memmove() - Moves a block of memory (handles overlap)
    char overlapStr[] = "abcdef";
    memmove(overlapStr + 2, overlapStr, 4);  // Move "abcd" to "cdef"
    printf("overlapStr after memmove: %s\n", overlapStr);  // Output: abcddef

    // memset() - Fills memory with a specific value
    char strFill[10];
    memset(strFill, 'X', 5);  // Fill first 5 bytes with 'X'
    strFill[5] = '\0';  // Null terminate
    printf("strFill after memset: %s\n", strFill);  // Output: XXXXX

    // strpbrk() - Finds the first character that matches any character in a set
    char *setStr = "abcdef";
    char *matchChar = strpbrk(str1, setStr);  // Finds first occurrence of any character from setStr in str1
    if (matchChar != NULL) {
        printf("Found matching character: %c\n", *matchChar);  // Output: Found matching character: e
    } else {
        printf("No matching character found\n");
    }

    return 0;
}
