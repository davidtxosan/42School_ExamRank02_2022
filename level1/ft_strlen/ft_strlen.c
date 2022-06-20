#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}
int main (void)
{
	char a[]= "holasss";
	int i = ft_strlen(a);
	printf("%d\n", i);
	return (0);

}