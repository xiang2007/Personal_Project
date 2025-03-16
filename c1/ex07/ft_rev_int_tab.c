/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:01:18 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/03/10 08:01:20 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(int n)
{
	char	c;

	if (n > 9)
	{
		ft_putstr(n / 10);
		c = (n % 10) + '0';
	}
}

void	ft_int_rev_tab(int *tab, int size)
{
	int	i;

	i = size - 1;
	while (i >= 0)
	{
		ft_putstr(tab[i]);
		i--;
	}
}
