/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:34:52 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/04 15:47:51 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*tempstr;

	tempstr = (unsigned char *)str;
	i = 0;
	while (n)
	{
		tempstr[i] = c;
		i++;
		n--;
	}
	return (str);
}
