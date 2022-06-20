#include <unistd.h>
int main (int ac, char **ag)
{
	int i = 0;
	if(ac == 2)
	{
		while (ag[1][i]  != '\0')
			i++;
		i--;
		while(ag[1][i])
		{
			write(1, &ag[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}