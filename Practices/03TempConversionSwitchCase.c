#include <stdio.h>
#include <ctype.h>

int main() {
	// temperature conversion
	
	char unit;
	double temp;
	double result;
	
	printf("F/C? ");
	scanf("%c", &unit);
	unit = toupper(unit);
	
	switch(unit) {
	    case 'F':
	    
	        printf("\nfarenheit -> Celsius\nEnter Farenheit: ");
	        scanf("%lf",  &temp);
	        
	        result = (temp - 32)*5/9;
	        
	        printf("\n-> %lf Celsius", result);
	        break;
	        
	    case 'C':
	        printf("\nCelsius-> Farenheit\nEnter Celsius: ");
	        scanf("%lf",  &temp);
	        
	        result = (temp * 9 / 5) + 32;
	        
	        printf("\n-> %lf Farenheit", result);
	        break;
	        
	    default:
	        printf("\n%c is not an option", unit);
	        break;
	}
	
	return 0;
}