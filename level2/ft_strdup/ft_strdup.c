#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i = 0;
	char *copy;

	while(src[i] != '\0')
		i++;
	copy = (char *)malloc(sizeof(char) * i + 1);
	if (copy == NULL)
		return (copy);
	i = 0;
	while(src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	printf("%s\n", ft_strdup("teste"));
	printf("%s\n", strdup("teste"));
}
*/