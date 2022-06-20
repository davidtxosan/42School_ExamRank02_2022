#include <stdio.h>
char *ft_strcpy(char *destin, char *orig)
{
	int i = 0;
	while(orig[i] != '\0')
	{
		destin[i] = orig[i];
		i++;
	}
	destin[i]= '\0';// si no se pone sobreescribe el string origen hasta destino, pero deja en destino los caracteres sobrantes.
	return (destin);
}
/*
int	main(void)
{
	char	orig[] = "inicio";
	char	destin[] = "finalizado";
	char	*result;

	printf("ANTES\n\torig: %s\n\tdestin: %s\n", orig, destin);
	result = ft_strcpy(destin, orig);
	printf("DESPUÉS\n\torig: %s\n\tdestin: %s\n", orig, result);
	return (0);
}
*/
