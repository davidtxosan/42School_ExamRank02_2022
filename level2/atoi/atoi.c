int ft_atoi(const char *str)
{
	int i = 0;
	int result = 0;
	int neg = 1;
	while (str[1] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		neg *= -1;
	else if (str[i] == '+')
		i++;
	while(str[i] !='\0' && str[i] >= '0' && str[i] <= '9')
	{

		result *= 10;
		result += str[i] - '0';
		i++;
	} 
	return(result * neg);
}
/*
int	main(void)
{
    char a[] = "1975";
    int	i;
    i = ft_atoi(a);
    printf("%d\n", i);
}
*/
