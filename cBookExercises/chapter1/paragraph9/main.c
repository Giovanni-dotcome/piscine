#include <stdio.h>
#define LIMIT 4
#define MAXLINE 1000

/* reads a set of text lines and prints the longest */
void copy(char to[], char from[])
{
	int i = 0;

	while ((to[i] = from[i]) != '\0') i++;
}
int get_line(char s[])
{
	int i, c;

	for (i=0; i < MAXLINE-1 && ((c=getchar()) != EOF && c != '\n'); i++) s[i] = c;

	if (c == '\n')
	{
		s[i] = c;
		i++;
	}

	s[i] = '\0';

	return i;
}

void get_longest(char longest[])
{
	int max, len;
	char curr[MAXLINE];
	max = 0;
	
	while ((len = get_line(curr)) > 0)
	{
		if (len > max) 
		{
			max = len;
			copy(longest, curr);
		}
	}
}

/* Write a program to print all input lines that are longer than 80 characters */
void empty_str(char s[])
{
	for (int i=0; s[i] != '\0'; i++) s[i] = 0;
}

int print_over_80()
{	
	int c;
	char s[MAXLINE];

	while ((c = get_line(s)) > 0)
	{
		if (c > LIMIT) printf("%s\n", s);
	}

	return 0;
}

/* Write a program to remove trailing blanks (spazi a fine riga), and tabs from each line of input, and to delete entirely blank lines. */
int getLine(char s[])
{
	int c, i;

	for (i=0; i < MAXLINE && ((c = getchar()) != '\n' && c != EOF); i++) s[i] = c;

	if (c == '\n')
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';

	return i;

}

int rmv_spaces(char s[])
{
	/* exclude '\n' */
	int i = 0;
	for (; s[i] != '\n'; i++) 
		;
	i--;

	/* escludere '\t' & ' ' */
	for (; i > 0 && (s[i] == '\t' || s[i] == ' '); i--) 
		;

	/* if not empty line update end of line  */
	if (i >= 0)
	{
		i++;
		s[i] = '\n';
		i++;
		s[i] = '\0';	
	}

	return i;
}

/* void reverse(char s[]) = reverses s. Use it to write a program that reverses its input a line at a time. */
void swap(int i, int j)
{
	int t = i;
	i = j;
	j = t;
}

void reverse(char s[], int e)
{
	int i = 0;	
	
	if (s[e] == '\0') printf("is a zero");
	if (s[e] == '\n') e--;
	
	while (i < e)
	{
		char t = s[i];
		s[i] = s[e];
		s[e] = t;
		i++;
		e--;
	}
}

int main()
{
	int n;
	char s[MAXLINE];

	while ((n = get_line(s)) > 0)
	{
		reverse(s, --n);
		printf("%s", s);
	}
	return 0;
}
