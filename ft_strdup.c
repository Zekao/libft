/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 21:00:10 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/22 17:12:35 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	int		i;
	char	*newstr;

	i = 0;
	while (str[i])
		i++;
	newstr = malloc (sizeof(char) * (i + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
