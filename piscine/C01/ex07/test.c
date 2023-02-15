#include "ft_sort_int_tab.c"
#include <stdio.h>

int main()
{
	int *tab;
	tab[0] = 4;
	tab[1] = 2;
	tab[2] = 1;
	tab[3] = 0;
	tab[4] = 3;
	int size = 5;
	
	printf("%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_sort_int_tab(tab, size);
	printf("%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return 0;
}
