#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i = 0;
	char *copy;

	//while(src[i] != '\0')
		//i++;
	//copy = (char *)malloc(sizeof(char) * i + 1);
	copy = (char *)malloc(sizeof(*src) - 1);

	//if (copy == NULL)
		//return (copy);
	//i = 0;
	while(src[i])
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
	printf("%s\n", ft_strdup("testeo"));
	printf("%s\n", strdup("testeo"));
}
*/
