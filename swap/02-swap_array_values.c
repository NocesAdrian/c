#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	// SWAP AN ARRAY ELEMENT VALUE
	char array[][10] = {"second", "first"};
	printf("SWAP ARRAY ELEMENTS VALUES\n");
	
	// Before
	printf("\nbefore: \n{ ");
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
	    printf("%s ", array[i]);
	}
	printf("}");
	
	// After
	char tmp[1][10];
	
	// save the first array element of array[0] to tmp[0]
	strcpy(tmp[0], array[0]);
	
	// SWAP
	strcpy(array[0], array[1]);
	strcpy(array[1], tmp[0]);
	
	printf("\n\nafter: \n{ ");
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
	    printf("%s ", array[i]);
	}
	printf("}");
	
	return 0;
}