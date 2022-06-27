#include <stdio.h>

int	atoi_base(const char *str, int str_base)
{
    int     ret;
    int     sign;
    char    *char_input;
    
    ret = 0;
    sign = 1;
    char_input = "0123456789abcdef";
    if (str[0] == '-' || str[0] == '+')
    {
        if (str[0] == '-')
            sign = -1;
        str++;
    }
    while (str[0] != '\0')
    
}

int		main(void)
{
printf("%d\n", ft_atoi_base("15690b80B", 13));
return (0);
}