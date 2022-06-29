#include <unistd.h>

void	hidenp(char *S1, char *S2)
{
	while (*S1 != '\0')
	{
		while (*S1 != *S2 && *S2 != '\0')
			S2++;
		if (*S2 == '\0')
		{
			write(1, "0", 1);
			return;
		}
		S2++;
		S1++;
	}
	write(1, "1", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}