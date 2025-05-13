#include <stdio.h>

int findMax(int x, int y)
{
    // if true ?
    // else :
    // (condition) ? value if true : value if false

    // if x is greater than y findMax() = x, or return x
    // else findMax() = y;, or return y
    return (x>y) ? x : y;
}

int main()
{
    printf("%d\n", findMax(10, 15));
    printf("%d\n", findMax(10, 5));
    printf("%d\n", findMax(1000, 155));
}
