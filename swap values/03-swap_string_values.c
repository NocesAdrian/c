#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	// SWAP
	// just imagine you have 3 cups 1 is empty and 2 is full
	// you pour the first full cup to the empty cup
	// now you pour the second cup to first cup which is now empty
	// now you pour the empty cup which is now filled with the first cup to the second cup
	// boom swapped
	
	
	char string1[15] = "Bob";
	char string2[15] = "Cris";
	char tmp[15];
	
	// BEFORE
	printf("BEFORE: \n");
	printf("\nstring1 = %s", string1);
	printf("\nstring2 = %s", string2);
	
	// save string1 to tmp
	strcpy(tmp, string1);
	
	// now begin swap
	strcpy(string1, string2);
	strcpy(string2, tmp);
	
	// AFTER
	printf("\n\nAFTER: \n");
	printf("\nstring1 = %s", string1);
	printf("\nstring2 = %s", string2);
	
	return 0;
}