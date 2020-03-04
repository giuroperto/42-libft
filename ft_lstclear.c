/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:34:18 by goka-rop          #+#    #+#             */
/*   Updated: 2020/03/03 15:37:09 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*tmp;

	if (*lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			if (del)
				ft_lstdelone(*lst, del);
			*lst = tmp;
		}
		*lst = NULL;
	}
}
