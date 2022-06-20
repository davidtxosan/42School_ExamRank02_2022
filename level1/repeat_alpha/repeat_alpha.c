#include <unistd.h>
int main(int argc, char **argvs)
{
	int i = 0;
	int cont = 0;
	if(argc == 2)
	{
		while(argvs[1][i] != '\0')
		{
			if (argvs[1][i] >= 'a' && argvs[1][i] <= 'z')
				cont += argvs[1][i] - 96;
			else if (argvs[1][i] >= 'A' && argvs[1][i] <= 'Z')
				cont += argvs[1][i] - 64;

			while(cont != '\0')
			{
				write(1, &argvs[1][i], 1);
				cont--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}