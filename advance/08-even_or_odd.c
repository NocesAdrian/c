#include <stdio.h>

int main() {
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            // every i / 2 that dont have remainder is even
            printf("%d / 2 = %d, even\n", i, i/2);
        } else {
            printf("%d / 2 = %d, odd\n", i, i/2);
        }
    }
}