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
	printf("%lu\n", ft_strcspn("testera", "ra"));
	printf("%lu\n", strcspn("testera", "ra"));
}
*/
/*
int main(void)
{
	char s1[] = "holas";
	char s2[] = " ams";
	printf("%lu\n", ft_strcspn(s1, s2));
	printf("%lu\n", strcspn(s1, s2));
	return(0);
}
*/
