int	ft_iterative_power(int	nb, int power)
{	
	int	temp;
	
	temp = power;
	while  (nb == 0 && power == 0)
	{
		return(1);
	}
	while (power < 1)
	{
		return(0);
	}
	while (temp > 1)
	{
		nb = nb * power;
		temp--;
	}
	return(nb);
}
