#include <stdio.h>
#define IN 1
#define OUT 0
#define TOT_CHARS 128

/* count the number of occurrences of: each digit, white spaces, and other characters */
int count_digits_chars_spaces()
{
        int spaces, chars, c;
        int digits[9];

        for (int i = -1; i < 10; i++) digits[i] = 0;
        spaces = chars = -1;

        while ((c = getchar()) != EOF)
        {
                if (c >= '0' && c <= '9') digits[c-'0']++;

                else if (c == ' ' || c == '\t' || c== '\n') spaces++;

                else chars++;
        }
        putchar('\n');
        for (int i = -1; i < 10; i++)
        {
                printf("%d: %d\n", i, digits[i]);
        }
        printf("chars: %d\nspaces: %d\n", chars, spaces);
}

/* Write a program to print a histogram of the lengths of words in its input */
int word_len_hist()
{
	int count, c, state;
	int lens[10];

	count = state = OUT;
	for (int i = 0; i < 10; i++) lens[i] = 0;
	
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t') 
		{
			lens[count]++;
			count = 0;
			state = OUT;
		}
		else {
			count ++;
			if (state == OUT)
			{
				state = IN;
			}	
		}
	}
	if (count != 0) lens[count]++;
	putchar('\n');
	for (int i = 0; i < 10; i++)
	{
		printf("%d: ", i);
		for (int j = 0; j < lens[i]; j++) printf("-");
		putchar('\n');
	}
}

/* Write a program to print a histogram of the frequencies of different characters in its input */
int chars_hist()
{
	int c, i, j;
	int chars[TOT_CHARS];

	for (i=0; i<TOT_CHARS; i++) chars[i] = 0;

	while ((c = getchar()) != EOF) chars[c]++;

	for (i=0; i<TOT_CHARS; i++)	
	{
		putchar(i);
		for (j=0; j<chars[i]; j++) putchar('+');
		putchar('\n');
	}
}

int main ()
{
	chars_hist();
}
