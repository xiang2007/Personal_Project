int	ft_fibonacci(int index)
{
	while (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
	if (index < 0)
		return (-1);
}
