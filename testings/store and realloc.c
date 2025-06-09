#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int fetch_characters_from_file_to_memory(char *, char **, size_t *);

int main() {

    // count of maximum characters that the memory can store
    size_t max_count = 128;
    // allocate memory
    char *array_of_characters = (char *)malloc(max_count * sizeof(char));   // can store 128 characters
    if (!array_of_characters) return 1;

    if (fetch_characters_from_file_to_memory("src/test.txt", &array_of_characters, &max_count) == 1) {
        free(array_of_characters);
        return 1; 
    }

    return 0;
}

int fetch_characters_from_file_to_memory(char *filename, char **array, size_t *max_count) {

    // open and read file
    FILE *fp = fopen(filename, "r");
    
    // error handling
    if(fp == NULL) { fprintf(stderr, "failed to open %s\n", filename); return 1; }

    int buffer;
    size_t index = 0;
    while ((buffer = fgetc(fp)) != EOF) {
        if (index >= *max_count) {
            *max_count *= 2;
            char *tmp = (char *)realloc(*array, (*max_count) * sizeof(char));
            if (!tmp) {fclose(fp); return 1;}
            *array = tmp;
        }
        (*array)[index] = (char)buffer;
        index++;
    }

    (*array)[index] = '\0';
    printf("%s", *array);

    fclose(fp);
    return 0;
}