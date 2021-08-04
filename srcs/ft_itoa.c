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

int	count_size(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		n = n * -1;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

long int	under_zero(long int nbr, char *c)
{
	if (nbr < 0)
	{
		nbr = nbr * -1;
		*c = '-';
	}
	return (nbr);
}

char	*ft_itoa(int nb)
{
	char		*str;
	int			i;
	long int	nbr;
	int			count;

	nbr = nb;
	count = count_size(nbr);
	str = malloc(sizeof(char) * (count));
	if (!(str))
		return (0);
	i = 0;
	if (count == 0 || nbr < 0)
		count++;
	if (nbr < 0)
		nbr = under_zero(nbr, &str[i++]);
	while (count > i)
	{
		count--;
		str[count] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (str);
}
