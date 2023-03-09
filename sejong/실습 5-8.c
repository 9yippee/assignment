#include <stdio.h>
#pragma warning (disable : 4996)

int	check(int a)
{
	if (a % 4 == 0)
	{
		if (a % 100 == 0)
		{
			if (a % 400 == 0)
				printf("leap year");
			else
				printf("common year");
		}
		else
			printf("leap year");
	}
	return (0);
}


int	main()
{
	int i;

	scanf("%d", &i);
	check(i);
	return (0);
}