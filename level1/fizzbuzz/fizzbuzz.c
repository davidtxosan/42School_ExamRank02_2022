#include <unistd.h>

int ft_number(int number)
{
	if(number > 9)
		ft_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

int main (void)
{
	int i = 1;
	while (i <=100)
	{
		if(!(i % 3))
			write(1, "fizz", 4);
		if(!(i % 5))
			write(1, "buzz", 4);
		if(i % 3 && i % 5)
			ft_number(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}