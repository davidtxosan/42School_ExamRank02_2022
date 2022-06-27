int	max(int *tab, unsigned int len)
{
	int	max = 0;
	int i = 0;

	if (len == '\0')
		return (0);

	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
/*
#include <stdio.h>
int	main()
{
	int	tab[] = {555, 668, 3, -8, 963, 4156845};
	unsigned int	len = 1;
	printf("%d\n", max(tab, len));
}
*/