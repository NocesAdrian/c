#include <stdio.h>
int main() {


    // MEMORY = an array of bytes {00000000, 00000000, 00000000, ...} within ram (street)
    // MEMORY BLOCK = a single unit byte(0000 0000) within memory, used to hold some value (person)
    // MEMORY ADDRESS = the address of where a memory block is located (house adress)

    // MEMORY[] = {
    // MEMORY ADDRESS: BYTE or MEMORY BLOCK, 
    // MEMORY ADDRESS: BYTE or MEMORY BLOCK, 
    // MEMORY ADDRESS: BYTE or MEMORY BLOCK,
    // ...
    // };
    // 
    // MEMORY[] = {
    // 0061FE1F: 00001100,
    // 0061FE1E: 00001010,
    // 0061FE1D: 00001110,
    // ...
    // }; 

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    // DISPLAY HOW MANY BYTES EACH CHARACTER
    printf("%c = %d bytes\n", a, sizeof(a));
    printf("%c = %d bytes\n", b, sizeof(b));
    printf("%c = %d bytes\n\n", c, sizeof(c));
    
    // DISPLAY THE MEMORY ADDRESS ON WHERE THE MEMORY BLOCK OF EACH VARIABLES LOCATED
    // RAM stands for RANDOM ACCESS MEMORY
    // so each time you run, you get a different memory BASE address due to ASLR,
    // but the STACK layout stays consistent → last digit (offset) often stays the same!
    printf("The address of MEMORY BLOCK variable a = %c is %p \n", a, &a);
    printf("The address of MEMORY BLOCK variable b = %c is %p \n", b, &b);
    printf("The address of MEMORY BLOCK variable c = %c is %p \n\n", c, &c);

    short x = 'A';
    char y = 'B';
    int z = 'C';
    double p = 1.0;
    float r = 1.0;
    long int s = 'Y';
    char name[5] = "hi";

    // DISPLAY HOW MANY BYTES EACH CHARACTER
    printf("short %c = %d bytes\n", x, sizeof(x));
    printf("char %c = %d bytes\n", y, sizeof(y));
    printf("int %c = %d bytes\n", z, sizeof(z));
    printf("double %.2lf = %.2f bytes\n", p, sizeof(p));
    printf("float %.2f = %.2f bytes\n", r, sizeof(r));
    printf("long int %c = %d bytes\n", s, sizeof(s));
    printf("char name[5] %c = %d bytes\n\n", name, sizeof(name));


    printf("The address of MEMORY BLOCK variable x = %c is %p \n", x, &x);
    printf("The address of MEMORY BLOCK variable y = %c is %p \n", y, &y);
    printf("The address of MEMORY BLOCK variable z = %c is %p \n", z, &z);
    printf("The address of MEMORY BLOCK variable x = %.2f is %p \n", p, &p);
    printf("The address of MEMORY BLOCK variable y = %.2f is %p \n", r, &r);
    printf("The address of MEMORY BLOCK variable z = %c is %p \n", s, &s);
    printf("The address of MEMORY BLOCK variable x = %s is %p \n", name, &name);

    
    return 0;
}