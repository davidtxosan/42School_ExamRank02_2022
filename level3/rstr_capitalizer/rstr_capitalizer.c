#include <unistd.h>

void	str_capitalizer(char *str)
{
	while (*str != '\0')
	{
		//mientras encuentre un espacio o tab lo escribe y pasa al siguiente caracter
		while (*str != '\0' && (*str == ' ' || *str == '\t'))
		{
			write(1, str, 1);
			++str;
		}
		//mientras no haya un espacio o tab,si es una letra en MINUSCULA 
		//y el siguiente caracter es un espacio o tab, pone esa letra en MAYUSCULA.
		//si es una letra en MAYUSCULA y el siguiente caracter NO es un espacio ni tab , la pone
		//en MINUSCULA.
		while (*str != '\0' && *str != ' ' && *str != '\t')
		{
			if (*str >= 'a' && *str <= 'z'
			&& (*(str + 1) == '\0' || *(str + 1) == ' ' || *(str + 1) == '\t'))
				*str = *str - ('a' - 'A');
			else if (*str >= 'A' && *str <= 'Z' && *(str + 1) != '\0'
			&& *(str + 1) != ' ' && *(str + 1) != '\t')
				*str = *str + ('a' - 'A');
			write(1, str, 1);
			++str;
		}
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		int i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			++i;
		}
	}

	return (0);
}