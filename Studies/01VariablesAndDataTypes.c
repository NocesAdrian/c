#include <stdio.h>
#include <stdbool.h> //boolean

int main() {
	
	// handles integer
	int x; //declaration 
	x = 3; //initialization 
	int y = 4; //declaration + initialization
	int result = x + y;
	printf("result: %d\n", result);
	
	// handles decimal 4bytes
	float decimal = 1.234567; // 32bit
	printf("decimal: %f\n", decimal);
	
	// handles decimal 8bytes more precise than float
	// because float store lower bit, 
	// and might not store accurate decimals
	double gpa = 1.234512345123456; // 64bit
	printf("gpa: %0.15f\n",gpa);
	
	// handles single character
	char Grade = 'F';
	printf("Grade: %c\n", Grade);
	
	// handles string or sequence of char
	char name[] = "zian kenn ringor";
	printf("name: %s\n", name);
	
	char c = 100; // Letter d on ascii, 100 on decimal 
	printf("%d\n", c); // print 100
	printf("%c\n", c); // print character "d"
	
	// limit two decimal
	double G = 3.05;
	printf("%.2f\n", G);
	
	// handles store boolean value 1 and 0
	// true or false
	bool ON = true;
	bool OFF = false;
	printf("ON: %d\nOFF: %d\n", ON, OFF );
	
	const float PI = 3.14159;
	printf("%.5f\n",  PI);

	short int p;
	unsigned char q;
	unsigned int s;
	long int w;
	long long int t;
	unsigned long long int u;
	short int v;
	
	return 0;
}