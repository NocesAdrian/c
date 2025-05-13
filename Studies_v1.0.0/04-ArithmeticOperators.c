#include <stdio.h>

int main() {
	// arithmetic operators
	
	// - (Subtraction)
	// + (addition)
	// / (division)
	// * (multiplication)
	// % (módulos) -> gives the remainder of division
	// ++ (increment) 
	// - - (decrement) 
	
	int a = 5;
	int b = 2;
	
	float result = a / (float) b; // covert b from int -> float
	printf("%.2f\n", result);
	
	int result2 = a % b;
	printf("%d\n", result2);
	
	a++;
	printf("%d\n", a);
	b--;
	printf("%d\n", b);
	
	return 0;
}