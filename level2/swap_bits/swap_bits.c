unsigned	char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
/*
 #include <stdio.h> 
 int main(void)
{
	unsigned char test = 186;
 	printf("Should be : %d\n", swap_bits(test));
 }
 */