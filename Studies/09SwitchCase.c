#include <stdio.h>

int main() {
	// SWITCH CASE
	
	char grade;
	printf("Enter a letter garde: ");
	scanf("%c", &grade);
	
	switch(grade) {
	    case 'A':
	        printf("excellent");
	        break;
	    case 'B':
	        printf("Good");
	        break;
	    case 'C':
	        printf("Not Bad");
	        break;
	    case 'D':
	        printf("better next time");
	        break;
	    case 'E':
	        printf("lols");
	        break;
	    case 'F':
	        printf("You just Failed");
	        break;
	    default:
	        printf("not a valid grade");
	        break;
	}
	return 0;
}