/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:37:28 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/03 15:00:18 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_size(int nbr)
{
	int	size;

	size = 1;
	if (nbr == 0)
		return (2);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		size++;
	}
	while (nbr)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	long int	nb;
	int			size;
	char		*str;

	nb = nbr;
	size = ft_count_size(nb);
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		str[0] = '0';
	size--;
	str[size] = '\0';
	while (nb)
	{
		str[size - 1] = nb % 10 + '0';
		nb = nb / 10;
		size--;
	}
	return (str);
}
