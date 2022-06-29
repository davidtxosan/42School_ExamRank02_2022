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

		if (*str != '\0')
		{
			//si se encuentra un caracter en minuscula, lo pone en mayuscula, lo escribe y sigue al siguiente
			if (*str >= 'a' && *str <= 'z')
				*str = *str - 32;
			write(1, str, 1);
			++str;
		}
		//mientras el caracter no sea un espacio o tab, si es mayuscula lo pone en minuscula,lo escribe y sigue contando
		while (*str != '\0' && *str != ' ' && *str != '\t')
		{
			if (*str >= 'A' && *str <= 'Z')
				*str = *str + 32;
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