#include <stdio.h>

// typedef = gives nickname to data types
// we can call int with a nickname integer

typedef int integer;            // int is now called with a nickname "integer"    
typedef char character;         // char is now called with a nickname "character"
typedef float decimal;          // float is now called with a nickname "decimal"
typedef double longDecimal;     // double is now called with a nickname "longDecimal"

// uses it as data types variable
typedef int Age;                // can be used like this too

int main() {

    // using those nicknames as data types
    integer age = 18;
    character dollar = '$';
    const decimal PI = 3.14;
    const longDecimal e = 2.71;

    // variable as data type
    Age adrian = 18;

    return 0;
} 