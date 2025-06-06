#include <stdio.h>
#include <stdlib.h>

const size_t max_character = 2;
char *charArray = NULL;
char buffer[max_character];
size_t count = 0;

int main() {
    FILE *file_ptr = fopen("character.txt", "r");
    if (!file_ptr) {
        perror("Error opening file");
        return 1;
    }

    while (fgets(buffer, max_character, file_ptr)) {
        // Allocate space for one more char (+1 for '\0' at the end)
        char *temp = realloc(charArray, count + 2);
        if (!temp) {
            perror("Memory allocation failed");
            free(charArray);
            fclose(file_ptr);
            return 1;
        }

        charArray = temp;
        charArray[count++] = buffer[0];
    }

    if (charArray) {
        charArray[count] = '\0'; // Null-terminate string
        printf("Characters read: %s\n", charArray);
        free(charArray);
    }

    fclose(file_ptr);
    return 0;
}
