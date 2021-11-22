/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 20:11:40 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/22 17:11:51 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	long long	r;
	int			verif;

	r = 0;
	verif = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			verif = -verif;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (r * verif > 2147483647)
			return (-1);
		else if (r * verif < -2147483648)
			return (0);
		r = r * 10 + str[i] - 48;
		i++;
	}
	return (r * verif);
}
