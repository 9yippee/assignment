#include <stdio.h>
#pragma warning (disable : 4996)

int	main()
{
	int	a, b;

	scanf("%d", &a);
	scanf("%d", &b);
	while (1)
	{
		if (a == b)
		{
			printf("RIGHT\n");
			break;
		}
		else if (a > b)
		{
			printf("UP\n");
			scanf("%d", &b);
		}
		else
		{
			printf("DOWN\n");
			scanf("%d", &b);
		}
	}
	return (0);
}