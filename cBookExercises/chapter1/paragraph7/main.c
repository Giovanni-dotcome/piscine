#include <stdio.h>

/* fun that gives back m to the power of n */
int power (int base, int n)
{
	int res = 1;

	for (int i=0; i<n; i++) res*= base;

	return res;
}

int power_2(int base, int n)
{
	int res = 1;

	for (; n>0; n--) res*=base;

	return res;
}

int main ()
{
	int n = 4;
	int res = power_2(3, n);
	printf("%d\n%d\n", res, n);
}
