#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int		*range;
	int		i;

	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	if(range)
	{
		while (start != end)
		{
			range[i] = start;
			if (start < end)
				start++;
			if(start > end)
				start--;
			i++;
		}
		range[i] = end;
		return (range);
	}
	return (0);
}

int main()
{
	int	*lst;
	lst = ft_range(12, -3);

	while (*lst)
	{
	printf("%i\n", *lst);
		lst++;	
	}
	
	return (0);
}
