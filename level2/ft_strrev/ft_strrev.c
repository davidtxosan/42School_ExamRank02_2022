#include <stdio.h>
char	*ft_strrev(char *str)
{
	int		i = 0;
	int		c = 0;
	char	temp = 0;

	while (str[i] != '\0')
		i++;
	i--;
	while (i > c)
	{
		temp = str[c];
		str[c] = str[i];
		str[i] = temp;
		i--;
		c++;
	}
	return (str);
}

int main (void)
{
	char a[50] = "hola";
	printf("%s\n", ft_strrev(a));
	return (0);
}