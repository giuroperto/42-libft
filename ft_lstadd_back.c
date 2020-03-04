/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:20:27 by goka-rop          #+#    #+#             */
/*   Updated: 2020/02/28 15:58:37 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*list;

	if (lst && new)
	{
		if (!(*lst))
		{
			*lst = new;
			return ;
		}
		list = *lst;
		while (list->next)
		{
			list = list->next;
		}
		list->next = new;
	}
}
