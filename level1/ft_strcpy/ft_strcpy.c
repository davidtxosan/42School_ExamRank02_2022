#include <stdio.h>
char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i]= '\0';// pone a null a partir de esa posicion del s1 para borrar los caracteres sobrantes.
	return (s1);
}
/*
int	main(void)
{
	char	s2[] = "inicio";
	char	s1[] = "finalizado";
	char	*result;

	printf("ANTES\n\ts2: %s\n\ts1: %s\n", s2, s1);
	result = ft_strcpy(s1, s2);
	printf("DESPUÉS\n\ts2: %s\n\ts1: %s\n", s2, result);
	return (0);
}
*/
