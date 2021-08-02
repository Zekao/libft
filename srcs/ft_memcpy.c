/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:48:48 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/02 18:41:31 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*newsrc;
	char	*newdest;

	newsrc = (char *)src;
	newdest = (char *)dest;
	i = 0;
	while (i < n)
	{
		newdest[i] = newsrc[i];
		i++;
	}
	return (dest);
}
