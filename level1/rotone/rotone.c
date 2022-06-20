#include <unistd.h>
int main (int ac, char **ag)
{
	int i = 0;
	if(ac == 2)
	{
		while(ag[1][i] != '\0')
		{
			if(ag[1][i] == 'z' || ag[1][i] == 'Z')
				ag[1][i] -= 25;
			else if (ag[1][i] >= 'a' && ag[1][i] <= 'z')
				ag[1][i] += 1;
			else if (ag[1][i] >= 'A' && ag[1][i] <= 'Z')
				ag[1][i] += 1;
			write(1, &ag[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}