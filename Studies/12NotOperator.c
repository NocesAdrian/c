#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

    // NOT operator Invert things if false using NOT it will become true
    // !

    char isSunny;
    bool sunny = false;

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

    // if sunny is not true then it execute the code
    // if sunny is true then proceed to else
    if (!sunny) {
        printf("\nnot sunny outside!\n");
    }
    else {
        printf("\nsunny outside!\n");
    }

    return 0;
}