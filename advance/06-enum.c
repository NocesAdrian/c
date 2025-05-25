#include <stdio.h>

// enum = a user defined type of name integer identifiers
//        helps to make program more readable
// are not strings but they can be treated as integer

typedef enum {sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7} Day; // these are global can be accessed anywhere

int main() {

    Day today;
    today = sun;

    // helps a lot for being readable
    if (today == sun || today == sat) {
        printf("Today is weekend!!");
    } else {
        printf("today is work day...");
    }

    return 0;
}