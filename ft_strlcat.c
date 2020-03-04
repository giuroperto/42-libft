/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 16:51:12 by goka-rop          #+#    #+#             */
/*   Updated: 2020/03/03 15:01:03 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dstlen;
	unsigned int	srclen;
	unsigned int	i;
	unsigned int	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (dstlen > dstsize)
		dstlen = dstsize;
	i = 0;
	j = dstlen;
	while (src[i] != '\0' && j < (dstsize - 1))
	{
		dst[j] = src[i];
		i += 1;
		j += 1;
	}
	if (j < dstsize)
		dst[j] = '\0';
	return (dstlen + srclen);
}
