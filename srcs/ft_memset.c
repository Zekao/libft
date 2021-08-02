/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:34:52 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/27 18:48:03 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int		i;
	char	*tempstr;

	tempstr = str;
	i = 0;
	while (n)
	{
		tempstr[i] = c;
		i++;
		n--;
	}
	return (str);
}
