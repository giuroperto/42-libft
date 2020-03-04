/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:34:39 by goka-rop          #+#    #+#             */
/*   Updated: 2020/02/28 16:26:06 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;
	char			*str;

	str = (char *)s;
	len = ft_strlen(str) + 1;
	while (len--)
	{
		if (str[len] == (char)c)
		{
			return (&str[len]);
		}
	}
	return (NULL);
}
