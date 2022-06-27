#include <stdio.h>
char	*ft_strrev(char *str)
{
	int		len;
	int		c;
	char	temp;

	len = 0;
	c = 0;
	temp = 0;
	while (str[len] != '\0')
		len++;
	len--;
	while (len > c)
	{
		temp = str[c];
		str[c] = str[len];
		str[len] = temp;
		len--;
		c++;
	}
	return (str);
}
/*
int main (void)
{
	char a[50] = "hola";
	printf("%s\n", ft_strrev(a));
	return (0);
}
*/