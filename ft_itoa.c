/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:37:28 by emaugale          #+#    #+#             */
/*   Updated: 2021/07/27 23:48:37 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*verif_nbr(char *str)
{
	str = malloc(sizeof(char) * 2);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;
	int		verif;

	verif = 0;
	i = 0;
	if (nbr == 0)
		return (verif_nbr(str));
	if (nbr == -2147483648)
		return ("-2147483648");
	if (nbr < 0)
	{
		verif++;
		nbr = nbr * -1;
	}
	str = malloc(sizeof(char) * 12);
	while (nbr)
	{
		str[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i++;
	}
	if (verif == 1)
		str[i] = '-';
	return (ft_strrev(str));
}
