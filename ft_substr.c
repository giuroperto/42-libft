/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 17:56:51 by goka-rop          #+#    #+#             */
/*   Updated: 2020/03/03 15:02:36 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;
	char			*substr;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (start < slen)
	{
		while (s[i] != '\0' && i < start + len)
		{
			substr[j] = s[i];
			i += 1;
			j += 1;
		}
	}
	substr[j] = '\0';
	return (substr);
}
