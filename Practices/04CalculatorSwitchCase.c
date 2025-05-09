#include <stdio.h>

int main() {
    // Calculator

    double num1;
    double num2;
    char operator;
    double result;

    printf("num1: ");
    scanf("%lf", &num1);

    printf("\nnum 2: ");
    scanf("%lf", &num2);

    // useful so when switching to string
    // get rid of newline when switching input type
    // from number to string
    getchar();

    printf("\nOperator (* / - +): ");
    scanf("%c", &operator);
    
    switch (operator) {
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    default:
        printf("\n%c is not valid", operator);
        break;
    }

    printf("\n-> %lf\n\n", result);
    
    return 0;
}