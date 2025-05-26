#include <stdio.h>
void swap(int *x, int *y) {
    int temporary = *x;     //  *x = 18
    *x = *y;                //  *x and *y dereference the pointers, meaning they **access the values** stored at the addresses x and y are pointing to.
    *y = temporary;         //  *y = 16 
}

int main() {

    // dereference = get the value where everyone is pointing out
    //
    // int age = 18;
    // int *x = &age;
    // *x = get the value of address x, this is a dereference
    // &age = get the memory address of age




    // swap memory addresses and its value

    int age1 = 18, age2 = 16;

    printf("BEFORE\n");
    // display memory address before
    printf("age1 address: %p\n", &age1);
    printf("age1 value: %d\n", age1);
    printf("age2 address: %p\n", &age2);
    printf("age2 value: %d\n\n", age2);

    // you are giving the memory address not the value itself and later swap access the values and probably changes it
    swap(&age1, &age2);

    printf("AFTER\n");
    // display memory address after
    printf("age1 address: %p\n", &age1);
    printf("age1 value: %d\n", age1);
    printf("age2 address: %p\n", &age2);
    printf("age2 value: %d\n", age2);
}