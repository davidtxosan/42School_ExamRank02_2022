#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	c = 0;
	int	c2;
	while (s[c] != '\0')
	{
		c2 = 0;
		while (reject[c2] != '\0')
		{
			if (s[c] == reject[c2])
				return (c);
			c2++;
		}
		c++;
	}
	return (c);
}
/*
#include <string.h>
int main ()
{
	printf("%lu\n", ft_strcspn("testera", "a"));
	printf("%lu\n", strcspn("testera", "a"));
}
*/