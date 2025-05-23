    #include <stdio.h>

int main() {

    // continue = skips rest of the code and forces the next iteration of the loop
    // break = exits loop/switch forces to not execute all next codes

    printf("\ncontinue: ");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("\n%d", i);
    }

    printf("\nbreak: ");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        printf("\n%d", i);
    }
    


    return 0;

}