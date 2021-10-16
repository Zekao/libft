/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 00:07:34 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/26 21:13:52 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_charset(char c, char sep)
{
	if (c == sep)
		return (1);
	else
		return (0);
}

int	ft_count_words(char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (ft_is_charset(str[i], sep) == 1 && str[i])
			i++;
		if (ft_is_charset(str[i], sep) == 0 && str[i])
		{
			while (ft_is_charset(str[i], sep) == 0 && str[i])
				i++;
			count++;
		}
	}
	return (count);
}

char	*ft_strndup(char *str, int j)
{
	int		i;
	char	*finalstr;

	i = 0;
	finalstr = malloc(sizeof(char) * (j + 1));
	if (!finalstr)
		return (NULL);
	while (str[i] && i < j)
	{
		finalstr[i] = str[i];
		i++;
	}
	finalstr[i] = '\0';
	return (finalstr);
}

char	**merci_la_norme(char **finalstr)
{
	finalstr[0] = 0;
	return (finalstr);
}

char	**ft_split(char *str, char sep)
{
	int		i;
	int		j;
	int		size;
	char	**finalstr;

	i = 0;
	j = 0;
	size = ft_count_words(str, sep);
	finalstr = malloc(sizeof(char *) * (size + 1));
	if (!finalstr)
		return (NULL);
	if (ft_count_words(str, sep) == 0)
		return (merci_la_norme(finalstr));
	while (j < size)
	{
		while (ft_is_charset(str[i], sep) == 1 && str[i])
			i++;
		str = str + i;
		i = 0;
		while (ft_is_charset(str[i], sep) == 0 && str[i])
			i++;
		finalstr[j++] = ft_strndup(str, i);
		str = str + i;
		i = 0;
	}
	finalstr[j] = 0;
	return (finalstr);
}