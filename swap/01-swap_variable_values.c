#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char x = 'x';
	char y = 'y';
	
	printf("\nx = %c", x);
	printf("\ny = %c", y);
	
	// supposed to swap the value but it didn't
	// x = y; boom x is = "y" now
	// y = x; boom x = "y" now then y = "y"
	// WRONG
	x = y;
	y = x;
	printf("\n\nwrong way: ");
	printf("\nx = %c", x);
	printf("\ny = %c", y);
	
	// RIGHT WAY
	char a = 'a';
	char b = 'b';
	// include a temporary variable to save 1 value
	char tmp;
	
	// Before
	printf("\n\nBefore: ");
	printf("\na = %c", a);
	printf("\nb = %c", b);
	
	// after
	tmp = a;
	a = b;
	b = tmp;
	// boom value swapped
	
	printf("\n\nAfter: ");
	printf("\na = %c", a);
	printf("\nb = %c", b);
	
	return 0;
}