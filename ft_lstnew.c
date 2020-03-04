/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:00:37 by goka-rop          #+#    #+#             */
/*   Updated: 2020/03/03 14:56:28 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*new_el;

	new_el = NULL;
	new_el = malloc(sizeof(t_list));
	if (new_el)
	{
		new_el->content = content;
		new_el->next = NULL;
	}
	return (new_el);
}
