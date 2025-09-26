// The C Programming Language
// 1.5.3 Line Counting

#include <stdio.h>

// Count lines, Tabs and Spaces

main()
{
	int c, n1;
	
	n1 = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n' || c == '\t' || c == ' ') // We continue with the same logic adding Ors to the statement
			++n1;
			printf("%d\n", n1);
}