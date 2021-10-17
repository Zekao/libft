/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:21:02 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/10 23:34:10 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_check_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*finalstr;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	if (!set || !s1)
		return (NULL);
	end = ft_strlen((char *)s1);
	while (ft_check_set(set, s1[start]) == 1)
		start++;
	while (end > start && ft_check_set(set, s1[end - 1]) == 1)
		end--;
	finalstr = malloc(sizeof(char) * (end - start + 1));
	if (!finalstr)
		return (NULL);
	while (start < end)
		finalstr[i++] = s1[start++];
	finalstr[i] = '\0';
	return (finalstr);
}
