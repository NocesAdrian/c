#include <stdio.h>
#include <string.h>
int main() {
	// INPUT
	
	// declare a variable where we store the INPUT value
	int age; 
	char name[25];
	
	printf("How old are you? ");
	
	// Takes two things x, y
	// x -> (format specifier, %d for decimal %s for string etc...)
	// y -> address where to store the input
	// use "&" to make it address to the variable
	// & -> address-of
	// &age -> the address-of age
	scanf("%d", &age);
	
	getchar(); // clear input buffer
	printf("\nYou are %d years old. \nwhat is your name? ", age);
	
	fgets(name, 25, stdin);
	name[strlen(name) - 1] = '\0'; // \0 null terminator
	printf("\nyou are %s", name);
	return 0;
}