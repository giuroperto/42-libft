/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:49:16 by goka-rop          #+#    #+#             */
/*   Updated: 2020/02/28 18:17:22 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int		i;
	unsigned char		*strdst;
	unsigned const char	*strsrc;

	i = 0;
	strdst = (unsigned char *)dst;
	strsrc = (unsigned char *)src;
	while (i < n)
	{
		strdst[i] = strsrc[i];
		if (strsrc[i] == (unsigned char)c)
		{
			return (dst + i + 1);
		}
		i += 1;
	}
	return (NULL);
}
