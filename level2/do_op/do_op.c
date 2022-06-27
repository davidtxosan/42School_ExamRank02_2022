#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main (int ac, char **ag)
{
	int number1;
	int number2;
	char oper;
	int result;
	if(ac == 4)
	{
		number1 = atoi(ag[1]);
		number2 = atoi(ag[3]);
		oper = ag[2][0];
		if( oper == '+')
			result = number1 + number2;
		else if (oper == '-')
			result = number1 - number2;
		else if (oper == '*')
			result = number1 * number2;
		else if (oper == '/')
			result = number1 / number2;
		else if (oper == '%')
			result = number1 % number2;
		printf("%i\n", result);
	}
	write(1,"\n", 1); 
	return (0);
}