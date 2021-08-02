/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:04:30 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/02 20:52:40 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlen;

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
