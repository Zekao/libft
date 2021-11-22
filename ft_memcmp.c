/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 04:03:47 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/22 17:12:08 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*newsrc;
	unsigned char	*newdest;

	newsrc = (unsigned char *)src;
	newdest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		if (newdest[i] == newsrc[i])
			i++;
		else
			return (newdest[i] - newsrc[i]);
	}
	return (0);
}
