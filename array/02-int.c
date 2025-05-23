#include <stdio.h>
int main() {
    int ages[] = {17, 18, 5};
    int prices[3];  // assign uninitialized memory of 3 bytes

    printf("\nages: ");
    printf("\n%d", ages[0]);
    printf("\n%d", ages[1]);
    printf("\n%d", ages[2]);

    // uses the uninitialized 3 bytes
    prices[0] = 10;
    prices[1] = 15;
    prices[2] = 100;

    printf("\nprices: ");
    printf("\n%d", prices[0]);
    printf("\n%d", prices[1]);
    printf("\n%d", prices[2]);

    return 0;
}