char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	c = 0;
	while (*s1)
	{
		while (s2[c] != '\0')
		{
			if (*s1 == s2[c])
				return ((char *)s1);
			c++;
		}
		s1++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main ()
{
	printf("%s\n", ft_strpbrk("This is a string to search in", "qxd"));
	printf("%s\n", strpbrk("This is a string to search in", "qxd"));
}