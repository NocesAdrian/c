#include <stdio.h>
int main() {
    double ages[] = {17.0, 18.0, 5.0};
    double prices[3];  // assign uninitialized memory of 3 bytes

    printf("\nages: ");
    printf("\n%.2lf", ages[0]);
    printf("\n%.2lf", ages[1]);
    printf("\n%.2lf", ages[2]);

    // uses the uninitialized 3 bytes
    prices[0] = 10.0;
    prices[1] = 15.0;
    prices[2] = 100.0;

    printf("\nprices: ");
    printf("\n%.2lf", prices[0]);
    printf("\n%.2lf", prices[1]);
    printf("\n%.2lf", prices[2]);

}