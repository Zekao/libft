/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 04:22:56 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/04 13:59:08 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*dest2;
	char	*src2;	

	src2 = (char *)src;
	dest2 = (char *)dest;
	if (src2 < dest2)
	{
		while (n)
		{
			dest2[n] = src2[n];
			n--;
		}
	}
	else
		 ft_memcpy(dest2, src2, n);
	return ((void *)dest);
}
