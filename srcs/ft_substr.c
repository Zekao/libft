/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 22:54:23 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/05 13:45:35 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newstr;
	size_t	size;

	size = len - start;
	if (s == 0)
		return (NULL);
	newstr = malloc(sizeof(char) * (size) + 1);
	if (!(newstr))
		return (0);
	i = 0;
	while (i < size)
		newstr[i++] = s[start++];
	newstr[i] = '\0';
	return (newstr);
}
