#include <unistd.h>

int	main(int argc, char **argv)
{
	int	used[255] = {0};
	int	i, j;
	if (argc == 3)
	{					
		i = 1;	//Iniciamos a 1, para no coger como argumento el nombre del fichero
		while (i < 3) //Creamos un bucle con el indice I, que sera el bucle para recorrer los 2 argumentos
		{
			j = 0;
			while (argv[i][j]) //recorremos el argumento de I, caracter a caracter gracias a la J, hasta el nulo
			{
				if (used[argv[i][j]] == 0)  //si used del caracter es igual a 0, entramos y lo igualamos a 1 para no entra mas en el futuro
				{
					used[argv[i][j]] = 1;
					write(1, &argv[i][j], 1);
				}
				j++; 
			}
			i++; 
		}
	}
	write(1, "\n", 1);
	return (0);
}
