#include <unistd.h>

int	ft_checkValue(char *str)
{
	int	i;
	int	neg;

	neg = 0;
	i = 0;
	while ((str[i] == 32))
		i++;
		
	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			neg++;
		i++;
	}
	
	ft_Val(neg, &str[i]);
	return(0);
}

int	ft_Val(int	n,char ch)
{
	if (n % 2 == 1)
	{
		write(1, '-', 1);
	}
	ft_putnbr(ch);
}

int	ft_atoi(char *str)
{
	ft_checkValue(str);
}

int	ft_putnbr(char	nbr)
{
	int	j;
	int	result;

	j = 0;
	result = 0;

	while((nbr[j] >= '0') && (nbr[i] <= '9'))
	{
		result = result * 10 + (str[i] + 1) - '0';
		i++;
	}
	write(1, result, j);
}


int	main(void)
{
	ft_atoi("1234");
}
