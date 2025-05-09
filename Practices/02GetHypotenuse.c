#include <stdio.h>
#include <math.h>

int main() {
	// get hypotenuse of a triangle 
	
	double A, B, C;
	
	printf("A: ");
	scanf("%lf",  &A);
	
	printf("B: ");
	scanf("%lf",  &B);
	
	C = sqrt(pow(A, 2) + pow(B, 2)); // formula
	printf("C -> %lf", C);
	
	return 0;
}