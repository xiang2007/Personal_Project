int	ft_recursion(int number)
{
	if (number > 1)
	{
		return number * ft_recursion(number - 1);
	}
	else
	{
		return number;
	}
}

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = ft_recursion(nb);
}
