#include <stdio.h>
int main() {
    int ages[] = {18, 19, 5, 10, 5, 6};

    // sizeof() = gets the size of array in bytes
    printf("\ntotal elements inside array ages[] is %d", sizeof(ages)/sizeof(ages[0]));
    printf("\ntotal size of the array ages[] is %d in bytes", sizeof(ages));
    printf("\ntotal size of the array element ages[0] is %d in bytes", sizeof(ages[0]));

    printf("\n\n%d / %d = %d", sizeof(ages), sizeof(ages[0]), sizeof(ages)/sizeof(ages[0]));
    printf("\n\nages: ");

    for (int i = 0; i < sizeof(ages)/sizeof(ages[0]); i++) {
        printf("\n%d", ages[i]);
    }

    // each element in array is int, and int is = 4 byte
    // in the ages[] array, it consist of 6 elements, total of 6 int, each int is 4 byte so, the 6 elements is 24 bytes in total
    // sizeof(ages) = 24
    // sizeof(ages[0]) which 1 int is equal to 4 bytes then:
    // sizeof(ages[0]) = 4

    // Soooooo
    // 24/4 = 6     // boom you just got the total of element inside the array ages[]

    return 0;
}
