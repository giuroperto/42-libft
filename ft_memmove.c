/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 13:06:00 by goka-rop          #+#    #+#             */
/*   Updated: 2020/03/03 14:57:45 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	const char	*strsrc;
	char		*strdst;

	if (!len || dst == src)
	{
		return (dst);
	}
	if (src > dst)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		i = (int)len - 1;
		strsrc = (char *)src;
		strdst = (char *)dst;
		while (i >= 0)
		{
			strdst[i] = strsrc[i];
			i -= 1;
		}
	}
	return (dst);
}
