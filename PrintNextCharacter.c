// The C Programming Language 1-6 1-7

#include <stdio.h>

// Copy input to output; 1st version

int main()
{
	int c;
    while ((c = getchar()) != EOF)
        putchar(c);
    
}