#include <stdio.h>
#include <math.h>

int main() {
	
	// MATH
	
	double A = sqrt(9); // square root
	printf("square root of 9 -> %.2lf\n", A);
	
	double B = pow(2, 4); // 2⁴ 2 to the power of 4 is 16
	printf("2 to the power of 4 -> %.2lf\n", B);
	
	int C = round(3.14); // round off -> 3
	printf("round off 3.14 -> %ld\n", C);
	
	int D = ceil(3.14); // always round up -> 4
	printf("always round up 3.14 -> %ld\n", D);
	
	int E = floor(3.14); // always round down -> 3
	printf("always round down 3.14 -> %ld\n", E);
	
	double F = fabs(-100); // absolute value, turn everything to positive
	printf("absolute value of -100 -> %.2lf\n", F);
	
	double G = log(5); // logarithm
	printf("logarithm of 5 -> %f\n", G);
	
	double H = sin(45); // sine
	printf("sine of 45 -> %lf\n", H);
	
	double I = cos(45); // cosine
	printf("cosine of 45 -> %lf\n", I);
	
	double K = tan(45); // tangent
	printf("tangent of 45 -> %lf\n", K);

	
	return 0;
}