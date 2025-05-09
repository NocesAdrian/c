#include <stdio.h>
#include <math.h>

int main() {
	const double PI = 3.14159;
	double radius;
	double circumference;
	double area;
	
	printf("\nEnter a radius of a circle: ");
	scanf("%lf", & radius);
	
	circumference = 2 * PI * radius;
	printf("circumference -> %lf\n", circumference);
	
	area = PI * pow(radius, 2);
	printf("area -> %lf\n",  area);
	return 0;
}