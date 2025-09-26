// The C Programming Language 

#include <stdio.h>

// Count the characters in input; 1st Version
main()
{
	long nc;
	
	nc=0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}