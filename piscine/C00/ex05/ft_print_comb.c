#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print(int a, int b, int c)
{
	ft_putchar(a+48);
	ft_putchar(b+48);
	ft_putchar(c+48);
	ft_putchar(',');
	ft_putchar(' ');
}

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
				ft_print(a, b, c++);
			}
			c = ++b;
			c++;
		}	
		b = ++a;
		c = ++b;
		c++;
	}
}
