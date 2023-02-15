#include "ft_div_mod.c"
#include <stdio.h>

int main()
{
	int a = 5;
	int b = 3;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("div: %d\nmod:%d\n", div, mod);

	return 0;
}
