/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 10:18:11 by goka-rop          #+#    #+#             */
/*   Updated: 2020/03/03 14:56:17 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*old;
	t_list	*new;

	if (!lst)
		return (NULL);
	newlist = ft_lstnew((*f)(lst->content));
	if (!newlist)
		return (NULL);
	new = newlist;
	old = lst->next;
	while (old)
	{
		if (!(new->next = ft_lstnew((*f)(old->content))))
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		old = old->next;
		new = new->next;
	}
	return (newlist);
}
