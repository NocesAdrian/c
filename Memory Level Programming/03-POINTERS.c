#include <stdio.h>


void printAge(int *pAge) {
    printf("you are %d y/o!\n", *pAge);
}

int main() {
    // POINTERS = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //            some task performed more easily with pointers
    //        * = indirection operator (value address) address to a value
    
    // example:
    
    int age = 20;  // i wanna store its address to other variable but with pointer *

    // now the memory adress of age is now stored to a variable
    int *pAge = NULL; // GOOD practice to assign pointer as NULL
    pAge = &age;      // store memory address of age and later access the value here through pointer

    // display addresses
    printf("address of age: %p\n", &age);
    printf("value of pAge: %p\n\n", pAge);

    // display values
    printf("value of age: %d\n", age);
    printf("value at stored address(%p): %d\n\n",pAge, *pAge);

    // display size
    printf("size of age %d bytes\n", sizeof(age));
    printf("size of pAge %d bytes\n", sizeof(pAge));

    printAge(pAge);


    // Display the memory address
    // printf("memory address of age: %p\n", pAge);
    // Display the value of the memory address
    // *pAge = pointer to value of the memory address
    // pAge = pointer to the memory address of ag
    // printf("the value of memory address(%p) of age is %d\n", pAge, *pAge);

    return 0;

}