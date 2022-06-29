#include <stdlib.h>

int	pgcd(int a, int b)
{
	int n;
	if (a > b)
		n = a;
	else 
		n = b;

	while (1)
	{
		if (a % n == 0 && b % n == 0)
			return(n);
		--n;
	}
	return (0);
}

#include <stdio.h>
int		main(int argc, char **argv)
{
	int num;
	if (argc == 3)
		num = pgcd(atoi(argv[1]), atoi(argv[2]));
		printf("%d\n", num);

	return (0);
}