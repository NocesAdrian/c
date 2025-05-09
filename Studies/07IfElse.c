#include <stdio.h>

int main() {
	// if else statement
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age >= 18) {
	    printf("You may Enter!! ");
	} 
	else if(age == 0) {
	    printf("you are just born!! "); 
	} 
	else if(age < 0) {
	    printf("you are not born yet!! ");
	}
	else {
	    printf("way to young");
	}
	
	return 0;
}