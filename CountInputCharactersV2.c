// The C Programming Language
// Section 1.5

// Count the characters in input; 2nd Version

#include <stdio.h>

int main() 
{
	double nc;
	
	for(nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc); // the %.0f suppresses the print of the decimal point
}