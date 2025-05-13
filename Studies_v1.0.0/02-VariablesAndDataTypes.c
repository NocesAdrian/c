#include <stddef.h>
#include <stdio.h>
#include <stdbool.h> //boolean

int main() {
	
	// handles integer
	int x; //declaration 									// int = 4 bytes
	x = 3; //initialization 
	int y = 4; //declaration + initialization
	int result = x + y;
	printf("result: %d\n", result);
	
	// handles decimal 4bytes
	float decimal = 1.234567; // 32bit						// float = 4 bytes
	printf("decimal: %f\n", decimal);
	
	// handles decimal 8bytes more precise than float
	// because float store lower bit, 
	// and might not store accurate decimals
	double gpa = 1.234512345123456; // 64bit				// double = 8 bytes
	printf("gpa: %0.15f\n",gpa);
	
	// handles single character
	char Grade = 'F';										// char = 1 byte
	printf("Grade: %c\n", Grade);
	
	// handles string or sequence of char
	char name[] = "zian kenn ringor";						// char name[] -> 1 character = 1 byte
	printf("name: %s\n", name);
	
	char c = 100; // Letter d on ascii, 100 on decimal 
	printf("%d\n", c); // print 100
	printf("%c\n", c); // print character "d"
	
	// limit two decimal
	double G = 3.05;
	printf("%.2f\n", G);
	
	// handles store boolean value 1 and 0
	// true or false
	bool ON = true;												// bool = 1 byte
	bool OFF = false;											// bool = 1 byte
	printf("ON: %d\nOFF: %d\n", ON, OFF );
	
	const float PI = 3.14159;
	printf("%.5f\n",  PI);

	int ab;							// Approximately -2,147,483,648 to 2,147,483,647. (Usually 4 bytes)
	float bc;						// Approximately ±3.4 x 10^-38 to ±3.4 x 10^+38 with about 6-7 decimal digits of precision. (Usually 4 bytes)
	double cd;						// Approximately ±1.7 x 10^-308 to ±1.7 x 10^+308 with about 15-16 decimal digits of precision. (Usually 8 bytes)
	char de;						// -128 to 127 (if signed, which is often the default) or 0 to 255 (if explicitly unsigned). (Usually 1 byte)
	short int p;					// -32,768 to 32,767. (Usually 2 bytes)
	unsigned char q;				//  0 to 255. (Usually 1 byte)
	unsigned int s;					//  0 to 4,294,967,295. (Usually 4 bytes)
	unsigned short int a;			//  0 to 65,535. (Usually 2 bytes)
	long int w;						// On many 32-bit systems: -2,147,483,648 to 2,147,483,647 (4 bytes).
									// On many 64-bit systems: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (8 bytes).
	long long int t;				// -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807. (Usually 8 bytes)
	unsigned long int ef;			// On many 32-bit systems: unsigned long int is usually 4 bytes (32 bits). This gives it a range of 0 to 4,294,967,295.
									// On many 64-bit systems: unsigned long int is often 8 bytes (64 bits). This significantly increases its range to 0 to 18,446,744,073,709,551,615.
	unsigned long long int u;		// 0 to 18,446,744,073,709,551,615. (Usually 8 bytes)

	size_t fg;						//  An unsigned type used to represent sizes of objects:
               						//  Typically, 32-bits on 32-bit systems and 64-bits on 64-bit systems:
               						//  For a 32-bit system: 0 to 4,294,967,295
               						//  For a 64-bit system: 0 to 18,446,744,073,709,551,615
	
	ptrdiff_t gh; 					// A signed type used to represent the difference between two pointers:
			                        // -2,147,483,648 to 2,147,483,647 (for a 32-bit system)
	return 0;
}