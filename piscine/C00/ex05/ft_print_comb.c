#include <unistd.h>
#include <stdio.h>

void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				printf("%d%d%d, ", a, b, c++);
			}
			c = ++b;
			c++;
		}	
		b = ++a;
		c = ++b;
		c++;
	}
}
