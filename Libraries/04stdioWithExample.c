#include <stdio.h>

int main()
{
    // Input & Output Functions

    // printf() – Prints formatted output to the console
    printf("Hello, World!\n");  // Prints: Hello, World!

    // scanf() – Reads formatted input from the user
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // Reads an integer from user input

    // puts() – Prints a string followed by a newline
    puts("This is a simple line output.");  // Prints: This is a simple line output.

    // fgets() – Reads a string from input
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads a line of input into str
    printf("You entered: %s", str);  // Prints the entered string

    // File Handling Functions

    // fopen() – Opens a file
    FILE *file = fopen("example.txt", "w");  // Opens a file for writing
    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    // fclose() – Closes an open file
    fclose(file);  // Closes the file after use

    // fgets() – Reads a line from a file
    file = fopen("example.txt", "r");  // Opens the file for reading
    if (file != NULL) {
        char line[100];
        fgets(line, sizeof(line), file);  // Reads a line from the file
        printf("Read from file: %s\n", line);  // Prints the line read from the file
        fclose(file);  // Close the file after reading
    } else {
        printf("Could not open file for reading.\n");
    }

    // fputs() – Writes a string to a file
    file = fopen("example.txt", "w");  // Opens the file for writing
    if (file != NULL) {
        fputs("This is a line written to the file.\n", file);  // Writes to the file
        fclose(file);  // Close the file
    } else {
        printf("Could not open file for writing.\n");
    }

    // fscanf() – Reads formatted input from a file
    file = fopen("example.txt", "r");  // Opens the file for reading
    if (file != NULL) {
        char buffer[100];
        fscanf(file, "%99s", buffer);  // Reads a string from the file
        printf("Read from file using fscanf: %s\n", buffer);  // Prints the value read
        fclose(file);  // Close the file
    }

    // fprintf() – Writes formatted output to a file
    file = fopen("example.txt", "w");  // Opens the file for writing
    if (file != NULL) {
        fprintf(file, "This is a formatted output written to the file.\n");  // Writes formatted data
        fclose(file);  // Close the file
    }

    // Character Input & Output Functions

    // getchar() – Reads a single character from input
    char c;
    printf("Enter a character: ");
    c = getchar();  // Reads a character
    printf("You entered: %c\n", c);  // Prints the entered character

    // putchar() – Prints a single character to output
    printf("Printing a single character: ");
    putchar(c);  // Prints the character entered earlier
    printf("\n");

    // fgetc() – Reads a character from a file
    file = fopen("example.txt", "r");  // Opens the file for reading
    if (file != NULL) {
        char ch = fgetc(file);  // Reads a character from the file
        printf("First character from file: %c\n", ch);  // Prints the character
        fclose(file);  // Close the file
    }

    // fputc() – Writes a character to a file
    file = fopen("example.txt", "a");  // Opens the file for appending
    if (file != NULL) {
        fputc('X', file);  // Writes a character to the file
        printf("Character 'X' written to file.\n");
        fclose(file);  // Close the file
    }

    // File Positioning Functions

    // fseek() – Moves file pointer to a specific position
    file = fopen("example.txt", "r");  // Opens the file for reading
    if (file != NULL) {
        fseek(file, 5, SEEK_SET);  // Moves the file pointer 5 bytes from the beginning
        char ch = fgetc(file);  // Reads the character at the new position
        printf("Character at position 5: %c\n", ch);
        fclose(file);  // Close the file
    }

    // ftell() – Returns the current position in a file
    file = fopen("example.txt", "r");  // Opens the file for reading
    if (file != NULL) {
        fseek(file, 5, SEEK_SET);  // Moves the file pointer 5 bytes from the beginning
        long pos = ftell(file);  // Get the current position
        printf("Current file position: %ld\n", pos);
        fclose(file);  // Close the file
    }

    // rewind() – Moves file pointer to the beginning
    file = fopen("example.txt", "r");  // Opens the file for reading
    if (file != NULL) {
        rewind(file);  // Moves the file pointer to the beginning
        char ch = fgetc(file);  // Reads the first character
        printf("First character after rewind: %c\n", ch);
        fclose(file);  // Close the file
    }

    return 0;
}
