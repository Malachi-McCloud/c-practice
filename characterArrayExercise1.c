/*Create a small program that does the following
While (theres another line)
    if (it's longer than the previous longest)
        save it 
        save its length
print the longest line*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getline(char line[], int maxline);
void copy(char to[], char from[]);


/* Print the longest input line*/
int main()
{
    int len; // Current line length
    int max; // maximum line length seen so far
    char line[MAXLINE]; // Current input line
    char longest[MAXLINE]; // Longest line saved here

    max = 0;
    while (((line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
	}
        if (max > 0) {// There was a line
			printf("Length: %d\n:", max);
            printf("Line (partial): %s", longest);
		}
        return 0;
}

/* getline: read a lline into s, return length */
int getline(char s[], int lim)
{
    int c, i;
	int len = 0; // total line length

    while ((c = getchar()) != EOF && c != '\n') {
		if ( i < lim - 1) {
			s[i] = c;
		++i;
	}
	++len;
}

if (c == '\n') {
	if ( i < lim - 1) {
		s[i] = c;
		++i;
	}
s[i] = '\0';
return len;
}
}


/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
    ++i;
}