#include <stdio.h>
#pragma warning (disable : 4996)

int	main()
{
	int x, y, z;
	int k, l, m;
	
	scanf("%d/%d/%d", &k, &l, &m);
	scanf("%d/%d/%d", &x, &y, &z);
	if (k <= x)
		printf("%d/%02d/%0d", k, l, m);
	else
		printf("%d/%02d/%d", x, y, z);
	return (0);
}