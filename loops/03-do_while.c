#include <stdio.h>

int main() {
    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks the condition and if condition is true continue to execute the block of code

    int num = 0;
    int sum = 0;

    do {
        printf("add any number current number(%d)", sum);
        scanf("%d", &num);
        if (num > 0) {
            sum += num;
        }
    } while(num > 0);

    printf("final %d", sum);

    return 0;
}