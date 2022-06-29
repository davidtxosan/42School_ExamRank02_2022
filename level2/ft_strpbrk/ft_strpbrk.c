
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int c;

	while (*s1)
	{
		c = 0;
		while (s2[c])
		{
		if (*s1 == s2[c])
			return ((char *)s1);
			c++;
		}
		++s1;
		
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	printf("ft: %s real: %s\n",ft_strpbrk("Tqxd", "qxd"),strpbrk("Tqxd", "qxd"));
	printf("%s\n", ft_strpbrk("Tqxd", "qxd"));
	return (0);
}
*/