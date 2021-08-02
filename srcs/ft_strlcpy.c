/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 23:41:27 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/02 20:49:17 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlen(const char *str);

unsigned int	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	srclen;

	srclen = ft_strlen(src);
	if (size == 0)
	{
		return (srclen);
	}
	i = 0;
	while (i < size - 1)
	{
		if (i < ft_strlen(src))
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}
