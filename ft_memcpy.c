/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 10:39:42 by goka-rop          #+#    #+#             */
/*   Updated: 2020/03/03 14:57:31 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*strdst;
	const char		*strsrc;

	i = 0;
	strdst = (char *)dst;
	strsrc = (char *)src;
	if (!n || dst == src)
	{
		return (dst);
	}
	while (i < n)
	{
		strdst[i] = strsrc[i];
		i += 1;
	}
	return (dst);
}
