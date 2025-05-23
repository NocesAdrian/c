#include <stdio.h>
int main() {
    float ages[] = {17.0, 18.0, 5.0};
    float prices[3];  // assign uninitialized memory of 3 bytes

    printf("\nages: ");
    printf("\n%.2f", ages[0]);
    printf("\n%.2f", ages[1]);
    printf("\n%.2f", ages[2]);

    // uses the uninitialized 3 bytes
    prices[0] = 10.0;
    prices[1] = 15.0;
    prices[2] = 100.0;

    printf("\nprices: ");
    printf("\n%.2f", prices[0]);
    printf("\n%.2f", prices[1]);
    printf("\n%.2f", prices[2]);

    return 0;
}