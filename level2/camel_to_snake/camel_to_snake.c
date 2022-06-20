#include <unistd.h>
int main (int ac, char **ag)
{
	int i = 0;
	if(ac == 2)
	{
		while(ag[1][i] !='\0')
		{
			if(ag[1][i] >= 'A' && ag[1][i] <= 'Z')
			{
				write(1, "_", 1);
				ag[1][i] = ag[1][i] + 32;
			}
			write(1, &ag[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}