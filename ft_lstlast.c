/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:04:13 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/22 17:12:02 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lastelem;

	if (lst)
		while (lst->next)
			lst = lst->next;
	lastelem = lst;
	return (lastelem);
}
