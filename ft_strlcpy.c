/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 23:41:27 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/22 17:21:46 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	i = 0;
	while (i < size - 1 && src[i])
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
