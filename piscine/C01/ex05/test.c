#include "ft_strlen.c"
#include <stdio.h>

int main()
{
	char *a;
	a[0] = '1';
	a[1] = '1';
	a[2] = '1';
	a[3] = '1';
	a[4] = '1';
	a[4] = '\0';

	printf("%d\n", ft_strlen(a));
	return 0;
}
