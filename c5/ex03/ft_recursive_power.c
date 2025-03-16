int	ft_recursive_power(int nb, int power)
{
	int	count;
	
	count = power;
	while (count != 0)
	{
		return nb * ft_recursive_power(nb * power, count - 1);
	}
}
