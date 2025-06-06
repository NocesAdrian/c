#include <stdio.h>
#include <stdlib.h>
int main() {

    // single integer variable
    int n = 1;  // single int is 1 element
    int *num = (int *)malloc(n * sizeof(int)); // 1 element in an array is 4 bytes as is int is 4 bytes
    num[0] = 18;    // or *num = 18; pointer to the first element

    // array of integer variable, 4 elements, 16 bytes it total, 4 bytes each element
    int n2 = 4; // how many element of an int array would you like
    int *num2 = (int *)malloc(n2 * sizeof(int));
    num2[0] = 16;
    num2[1] = 20;

    int **TwoDarray = (int **)malloc(n2 * sizeof(int *));
    // TwoDarray[0][0] = 18;



    // array of string
    int nElements = 4;  // how many elements would you like the array of string
    char **char1 = (char **)malloc(nElements * sizeof(char *));
    char1[0] = "hello";
    char1[1] = "bruuhh";

    printf("%s\n", char1[0]);
    printf("%s\n", char1[1]);
    printf("%p\n", &char1); // prints the memory address

    printf("%d\n", num[0]);

    printf("%d\n", num2[0]);
    printf("%d\n", num2[1]);

    // printf("%d\n", *TwoDarray[0]);

    free(num2);
    free(num);
    free(char1);
    free(TwoDarray);

    return 0;
}


