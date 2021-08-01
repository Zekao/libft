/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:37:28 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/01 15:53:44 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int			i;
	int			j;
	char		tmp;

	j = ft_strlen(str);
	i = 0;
	while (i < ((j + 1) / 2))
	{
		tmp = str[i];
		str[i] = str[j - 1];
		str[j - 1] = tmp;
		i++;
		j--;
	}
	return (str);
}

char	*verif_nbr(void)
{
	char	*str;

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
		return (verif_nbr());
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
