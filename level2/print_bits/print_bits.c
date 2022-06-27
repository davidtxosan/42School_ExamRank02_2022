#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 128;

	while (i > 0)
	{
		if (octet >= i)
		{
			write(1, "1", 1);
			octet = octet - i;
		}
		else
		{
			write(1, "0", 1);
			i = i / 2;
		}
	}
}
/*
int	main(void)
{
	print_bits(2);
	write(1, "\n", 1);
}
*/