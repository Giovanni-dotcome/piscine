#include <stdio.h>
#include <stdbool.h>

// program to print the value of EOF
void printEOFValue()
{
	putchar(EOF);
}


// program that copies its input to its output one character at a time
void fileCopying()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);	
}

// program counts characters
int getInputCharsCount()
{
	int i;

	for (i=0; getchar() != EOF; i++) ;

	return i;
}

// program counts input lines
int getInputLinesCount()
{
	int c, i;

	i = 0;

	while ((c=getchar()) != EOF)
	{
		if (c == '\n') i++;
	}

	return i;
}

// program counts lines, words, and characters
void getCounts()
{
	bool insideWord, cIsBlank;
	int wordsCount, linesCount, charsCount, c;
	insideWord = wordsCount = linesCount = charsCount = 0;

	while ((c = getchar()) != EOF)
	{
		charsCount ++;

		if (c == '\n') linesCount ++;

		cIsBlank = (c == ' ' || c == '\t' || c == '\n');

		if (cIsBlank) insideWord = false;
		else if (insideWord == false) 
		{
			insideWord = true;
			wordsCount++;	       
		}
	}

	printf("\nwordsCount: %d, linesCount: %d, charsCount: %d", wordsCount, linesCount, charsCount);
}	

// program that prints its input one word per line
void printLines()
{
	int c, cIsBlank;

	while ((c = getchar()) != EOF)
	{
		cIsBlank = (c == ' ' || c == '\n' || c == '\t');
		
		if (cIsBlank) putchar('\n');
		else putchar(c);
	}	
}

// program to count the number of occurrences of each digit, of white space characters, and of all other characters

#define NUM_DIGITS 10

void countDigitsSpacesChars()
{
	int digitsCount[NUM_DIGITS];	
	int character, othersCount, whiteSpacesCount;	
	bool isNumber, isCharacter, isWhiteSpace;

	othersCount = whiteSpacesCount = 0;
	for (int i=0; i<NUM_DIGITS; i++) 
		digitsCount[i] = 0;

	while ((character = getchar()) != EOF)
	{
		isWhiteSpace = (character == ' ' || character == '\n' || character == '\t');
		isNumber = (character >= 0 && character <= '9');

		if (isWhiteSpace) whiteSpacesCount++;	
		else if (isNumber) digitsCount[character-'0']++;
		else othersCount++;
	}

	printf("\nothersCount: %d\nwhiteSpacesCount: %d", othersCount, whiteSpacesCount);
	for (int i=0; i<NUM_DIGITS; i++)
		printf("\n%d count: %d", i, digitsCount[i]);
}

// program to print a histogram of the lengths of words in its input. (horizontal bars)
int printHistogramLenInputWordsHorizontal()
{
	 	
}

// program to print a histogram of the lengths of words in its input. (vertical bars)

int main()
{
	printHistogramLenInputWordsHorizontal();

	return 0;
}
