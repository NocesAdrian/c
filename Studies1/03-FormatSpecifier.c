#include <stdio.h>
#include <stdbool.h>
int main() {
	
	/*
	  integer(%d -> integer, whole number)
	  string(%s -> string)
	  single character(%c -> character)
	  float(%f -> float decimal 6digit 32bit 4bytes)
	  double(%0.15f -> double 15digit 64bit 8bytes)
	  boolean(%d -> true and false)
	  
	  %0.8f or %0.->8<-f means store 0.12345678 -> 8 decimal
	
	*/
	
	// print integer
	int x = 123;
	int y = 321;
	int result = x + y;
	printf("%d\n", result);
	
	// print single character
	char grade = 'F';
	printf("average grade: %c\n", grade);
	
	// print string or character sequence
	char name[] = "zian kenn ringor";
	printf("your name is: %s\n", name);
	
	// print float
	float gpa = 2.5;
	printf("gpa: %0.1f\n", gpa);
	
	// print decimal 8bytes
	double idk = 1.234512345123456; // 64bit
	printf("gpa: %0.15f\n", idk);
	
	// print boolean also store boolean value
	bool ON = true; // 1
	bool OFF = false; // 0
	printf("%d\n%d\n", ON, OFF);
	
	int f = 65;
	printf("character 65 is: %c\n",f);
	
	return 0;
}