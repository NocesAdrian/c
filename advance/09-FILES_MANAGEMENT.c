#include <stdio.h>
#include <string.h>

// why int function you'd say? 
// because function can contains value themselves 
// return 0; mean we gave our function a value 0
// so if we are going to print our function
// it prints 0

int file_write(char filename[], char msg[]) {
    
    // opens file with write capabilities
	FILE *write_ptr = fopen(filename, "w");

    if (write_ptr == NULL) {
        fprintf(stderr, "\nCouldn't open file.\n");
        return 0;
    } else {
        printf("\nFile <%s> opened successfully.\n", filename);
        fprintf(write_ptr, "%s", msg);
        
        fprintf(stdout, "writing... \"%s\"", msg);
        fprintf(stdout, "\n[FINISHED]\n");
        fclose(write_ptr);  // Don't forget to close!
        return 1;
    }
    
}


int file_append(char filename[], char msg[]) {
    
    // opens file with append capabilities
	FILE *append_ptr = fopen(filename, "a");
	
	if (append_ptr == NULL) {
        fprintf(stderr, "\nCouldn't open file.\n");
        return 0;
        
    } else {
        
        printf("\nFile <%s> opened successfully.\n", filename);
        fprintf(append_ptr, "%s", msg);
        fprintf(stdout, "appending... \"%s\" to file <%s>", msg, filename);
        fprintf(stdout, "\n[FINISHED]\n");
        fclose(append_ptr);  // Don't forget to close!
        return 1;
        
    }
}


int file_read(char filename[]) {
    
    // opens file with read capabilities
    FILE *read_ptr = fopen(filename, "r");
    
    if (read_ptr == NULL) {
        
        fprintf(stderr, "\nCouldn't open file  <%s>.\n", filename);
        return 0;
        
    } else {
        
        printf("\nFile <%s> opened successfully.\n", filename); 
        
        char buffer[255];
        // prints file each line like an array
        printf("reading... <%s>\n##############\n\n", filename);
        while(fgets(buffer, sizeof(buffer), read_ptr) != NULL) {
           printf("%s", buffer); 
        }
        printf("\n##############\n");
        printf("[FINISHED]\n");
        fclose(read_ptr);  // Don't forget to close!
        return 1;
    }
    
}

int removef(char filename[]) {
    
    // REMOVES A FILE
    if(remove(filename) != 0) {
        
        fprintf(stderr, "\nError removing file <%s>", filename);
        return 0;
        
    } else {
        
        printf("file <%s> is removed successfully!", filename);
        return 1;
        
    }
    
}

int file_copy(char dest[], char src[]) {
    FILE *read_file = fopen(src, "r");
    FILE *write_file = fopen(dest, "w");
    
    if(read_file == NULL || write_file == NULL) {
        fprintf(stderr, "\nERROR opening files.");
        if(read_file) fclose(read_file);
        if(write_file) fclose(write_file);
        return 0;
    } else {
        
        char buffer[255];
        while(fgets(buffer, sizeof(buffer), read_file) != NULL) {
           fprintf(write_file, "%s", buffer); 
        }
        fclose(read_file);
        fclose(write_file);
        return 1;
    }
}

int main() {
	// fopen("file name", "operation")
	// OPERATIONS:
	// w for write
	// a for append
	// r for read
	// fopen("filename", "w"); write on the file
    
    file_write("test.txt", "hello\n");
    
    file_append("test.txt", "Im mf stronks");
    
    file_read("test.txt");
    
    file_copy("shit.txt", "test.txt");
    
    file_read("shit.txt");
    
    removef("shit.txt");
    
	return 0;
}