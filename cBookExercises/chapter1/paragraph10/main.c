#include <stdio.h>
#define MAXLEN 20

/* void detab(char s[]) = replaces tabs in the input with #### */
void detab(char s[])
{
	
}

int get_line(char s[])
{
	int i, c;

	for (i = 0; i < MAXLEN-1 && ((c = getchar()) != EOF && c != '\n'); i++) 
		s[i] = c;

	if (c == '\n')
	{
		s[i] = c;
		i++;	
	}

	s[i] = '\0';

	return i;
}

int main()
{
	int c;
	char s[MAXLEN];

	while ((c = get_line(s)) > 0)
	{
		detab(s);
		printf("%s", s);
	}

	return 0;
}
