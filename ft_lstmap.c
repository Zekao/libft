/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:30:31 by emaugale          #+#    #+#             */
/*   Updated: 2021/11/22 17:12:03 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new;

	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	newlst = new;
	lst = lst->next;
	if (lst)
	{
		while (lst)
		{
			new = ft_lstnew(f(lst->content));
			if (!(new))
			{
				ft_lstclear(&newlst, del);
				return (NULL);
			}
			ft_lstadd_back(&newlst, new);
			lst = lst->next;
		}
	}
	return (newlst);
}
