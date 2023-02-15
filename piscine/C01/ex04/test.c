#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int main()
{
	int a = 5;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);

	printf("a: %d\nb:%d\n", a, b);
	return 0;
}
