/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 22:54:23 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/25 04:54:06 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_diff(size_t size1, size_t size2)
{
	if (size1 < size2)
		return (size1);
	else
		return (size2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	s = s + start;
	len = ft_diff(len, ft_strlen(s));
	newstr = ft_calloc(1, len + 1);
	if (!newstr)
		return (0);
	return ((char *)ft_memcpy(newstr, s, len));
}
