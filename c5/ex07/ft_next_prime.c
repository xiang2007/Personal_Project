int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	while (nb %2 != 1)
		return (ft_find_next_prime (nb + 1));
	return (nb);
}
