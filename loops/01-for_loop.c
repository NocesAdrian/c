#include <stdio.h>

int main() {
    // for loop = repeats a section of code in a limited time

    // example count 1 - 10, we dont want to manually print each number so here comes for loop
    // good for repeatable task using less steps and code, used in more logical way and alagorithms
    
    // 4 state:

    // 1 -> decalaration
    // 2 -> condition
    // 3 -> update/incement declared variable
    // 4 -> execute code inside brackets{} 

    // arithmetic count or increment by 1
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);
    }

    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }


    // arithmetic increment by 2
    for (int i = 0; i <= 10; i+=2) {
        printf("%d\n", i);
    }

    // arithmetic increment by -2
    for (int i = 10; i >= 0; i-=2) {
        printf("%d\n", i);
    }

    // geometric progression loop or loop with exponential growth
    for (int i = 1; i <= 10; i*=2) {
        printf("%d\n", i);
    }

    // reverse geometric progression
    for (int i = 10; i > 0; i/=2) {
        printf("%d\n", i);
    }

    return 0;
}