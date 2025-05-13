#include <stdio.h>
#include <stdbool.h>

int main() {

    // OR operator TRUE if one or More is TRUE
    // ||

    int temp; // celius 

    printf("Enter temparature: ");
    scanf("%d", &temp);

    if (temp <=0 || temp >= 36) {
        printf("\nthe weather is bad!\n");
    }
    else {
        printf("\nthe weather is good!\n");
    }

    return 0;
}