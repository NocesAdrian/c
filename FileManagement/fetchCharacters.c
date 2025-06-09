#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// max characters to store
size_t max_char_store = 1000;

// function proto for printing array of characters
int printc(const char *);

// function to fetch all characters from a file
int fetch_char(const char *, char *);

// main function
int main() {


    // character array where we store the characters
    char characters[max_char_store];
    
    fetch_char("src/test.txt", characters);

    printc(characters);
    

    return 0;
}

// function for fetching all characters from a file
int fetch_char(const char *filename, char *charArray) {

    // open file with read capable
    FILE *fp = fopen(filename, "r");

    // file error handling
    if (!fp) {
        fprintf(stderr, "failed to open %s\n", filename);
        return 1;
    }

    // important variables
    int ch;
    size_t count = 0;
    
    // loop throught the file and store it to an char array
    while ((ch = fgetc(fp)) != EOF && count < max_char_store - 1) {
        charArray[count] = (char)ch;
        count++;
    }

    // add NULL at the end of array
    charArray[count] = '\0';  // Null-terminate the string
    
    //close the file
    fclose(fp);
    // return success
    return 0;
}

// function proto for printing array of characters
int printc(const char *charArray) {
    
    // error handling
    if (!charArray) {
        fprintf(stderr, "printc: null pointer\n");
        return 1;
    }

    for (size_t i = 0; charArray[i] != '\0'; i++) {
        putchar(charArray[i]);
    }

    return 0;
}