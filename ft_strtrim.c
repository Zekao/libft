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

int	ft_check_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			j;
	int			count;
	char		*str;

	j = 0;
	while (s1[i])
	{
		if (ft_check_set(set, s1[i]))
			count++;
		i++;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (0);
	i = 0;
	while (s1[i])
	{
		if (ft_check_set(set, s1[i]))
			str[j++] = s1[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
