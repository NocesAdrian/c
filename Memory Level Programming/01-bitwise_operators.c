#include <stdio.h>
int main() {
    // BITWISE OPERATOR = special operator used in bit level programming
    //                    (Knowing binary is important to this topic)

    // & = AND
    // | = OR
    // ^ = XOR
    // << left shift
    // >> right shift
    
    int x = 6;      // 00000110 bit > 6
    int y = 12;     // 00001100 bit > 12
    int z = 0;      // 00000000 bit > 0

    z = x & y;      // 00000100 bit > 4
    printf("x & y = %d\n", z);

    z = x | y;      // 00001110 bit > 14;
    printf("x | y = %d\n", z);

    z = x ^ y;      // 00001010 bit > 10
    printf("x ^ y = %d\n", z);

    z = x << 1;     // 00001100 bit > 12
    printf("x << 1 = %d\n", z);

    z = y >> 1;     // 00000110 bit > 6
    printf("y >> 1 = %d\n", z);

    return 0;
}