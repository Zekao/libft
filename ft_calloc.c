/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:01:24 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/02 21:11:39 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*tab;
	int		i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = 0;
	tab = malloc(sizeof(size) * (nmemb + 1));
	while (tab[i])
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
