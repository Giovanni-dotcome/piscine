#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define JUMP 20
	
int fahr_to_cels ()
{
	printf("Fahrenheit to Celsius\n----------------------\n");

	for (int fahr = LOWER; fahr <= UPPER; fahr+=JUMP)
	{
		printf("%dF\t%5.1fC\n", fahr, 5*((float)fahr-32)/9);
	}
}

int cels_to_fahr ()
{
	printf("Celsius to Fahrenheit\n----------------------\n");
	
	for (int cels = UPPER; cels >= LOWER; cels -= JUMP)
	{
		printf("%3dC\t%5.1fF\n", cels, (9*((float)cels)/5)+32);
	}
}

int main ()
{
	cels_to_fahr ();
}
