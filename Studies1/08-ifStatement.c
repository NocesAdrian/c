#include <stdio.h>
#include <string.h>

int main() {
	// if else statement


	//
	//	INTEGER
	//

	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	getchar();

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


	//
	//	STRING
	//

	char yourpasswd[] = "lab001";
	char passwd[16];

	printf("\nEnter your password: ");

	fgets(passwd, sizeof(passwd), stdin);
	passwd[strlen(passwd) - 1] = '\0';

	if (strcmp(passwd, yourpasswd) == 0) {
		printf("Password is correct");
	} else {
		printf("Password is incorrect");
	}

	return 0;
}