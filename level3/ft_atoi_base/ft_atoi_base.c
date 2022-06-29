#include <stdlib.h>
#include <stdio.h>

int		ft_iswhitespace(char const c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
		|| c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	base(int c, int base)
{
	//todos los caracteres posibles de base 16 para abajo.
	char *str = "0123456789abcdef";
	char *str2 = "0123456789ABCDEF";
	int  i = 0;
	while (i < base)
	{
		//si el caracter del string a convertir esta en *str o *str2 devuelve el valor.
		if (c == str[i] || c == str2[i])
			return (i);
		i++;
	}
	//si la base es negativa o 0 la funcion devuelve -1.
	return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int nb = 0;
	int neg = 1;
	int	i = 0;
	//llama a la funcion para comprobar caracteres no imprimibles..si los encuentra,sigue contando.
	while (ft_iswhitespace(str[i]))
		i++;
	//si hay un "-" multiplica neg por -1(cada vez que se encuentre uno.)
	if (str[i] == '-')
	{
		neg *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	//mientras el resultado de la funcion base no de -1 ejecuta lo de abajo incrementando cada vez i en 1.
	while (base(str[i], str_base) != -1)
	{
		
		nb = nb * str_base;
		nb = nb + base(str[i], str_base);
		i++;
	}
	//el resultado es nb por neg(que puede ser negativo o positivo)
	return (nb * neg);
}

int	main(int ac, char **av)
{
	int		nb;
	if (ac == 3)
	{
		//llama a la funcion pasando los parametros por consola(recordar que el primer parametro lo pasa como char
		// por eso no lo convierte a int con atoi.)
		nb = ft_atoi_base(av[1], atoi(av[2]));

		printf("%d\n", nb);
	}
	return (0);
}

