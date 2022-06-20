#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main (int ac, char **ag)
{
	int first = atoi(ag[1]);
	char oper = ag[2][0];
	int second = atoi(ag[3]);
	int res;
	if(ac == 4)
	{
		if(oper == '+')
			res = first + second;
		else if (oper == '-')
			res = first - second;
		else if (oper == '*')
			res = first * second;
		else if (oper == '/')
			res = first / second;
		else if (oper == '%')
			res = first % second;
		printf("%d", res);
		printf("\n");

	}
	else
		write(1, "\n", 1);
	return (0);
}