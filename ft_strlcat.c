/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:04:30 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/22 17:12:37 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str);

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	while (i < size && dest[i])
		i++;
	if (i == size)
		return (i + ft_strlen(src));
	while (src[j])
	{
		if (j < size - destlen - 1)
		{
			dest[i] = src[j];
			i++;
		}
		j++;
	}
	dest[i] = '\0';
	return (destlen + j);
}
