#include <stdio.h>
#include <stdbool.h>

int main() {

    // AND operator wont be TRUE if all is not TRUE and one is NOT TRUE
    // &&

    int temp; // celius
    char isSunny;
    bool sunny;

    printf("Enter temparature: ");
    scanf("%d", &temp);

    getchar();

    printf("\nis sunny? (Y N): ");
    scanf("%c", &isSunny);
    isSunny = toupper(isSunny);

    switch (isSunny) {
    case 'Y':
        sunny = true;
        break;
    case 'N':
        sunny = false;
        break;
    default:
        break;
    }

    if (temp >= 0 && temp <= 36 && sunny == true) {
        printf("\nthe weather is good!\n");
    }
    else {
        printf("\nthe weather is bad!\n");
    }

    return 0;
}