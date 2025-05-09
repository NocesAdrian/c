#include <stdio.h>

// so void or function can have data type
void func()
{

}

// for example here:
double square(double x)
{
    // returns the result so sqauare() function now is equal to the result
    int result = x * x;

    // by using return square() = result;
    return result;
}

// example 2:
int add(int x, int y)
{
    return x + y;
}

// example 3:
char print(char name[])
{
    printf("%s\n", name);
    return 0;
}

// float etc

// this is the main function where all codes runs
int main()
{
    // square() = result;
    // x = square();
    // x = result;
    double x = square(3);
    printf("%lf\n", x);

    int y = add(5,5);
    printf("%d\n", y);

    print("hello world!");

    return 0;
}