/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:06:40 by wshou-xi          #+#    #+#             */
/*   Updated: 2025/03/11 11:06:43 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	print(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int	main(void)
{
	char	str1[30] = "First";
	char	*str2 = "";

	ft_strcat(str1, str2);
	print(str1);
}
