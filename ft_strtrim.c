/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 18:52:15 by goka-rop          #+#    #+#             */
/*   Updated: 2020/03/03 15:02:23 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_start(char const *str, char const *set)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_strchr(set, str[i]))
			return (i);
		i += 1;
	}
	return (i);
}

static int	check_end(char const *str, char const *set)
{
	int				i;
	unsigned int	s_len;

	s_len = ft_strlen(str);
	i = 0;
	if (s_len == 0)
		return (i);
	else
	{
		i = s_len - 1;
		while (i >= 0)
		{
			if (!ft_strchr(set, str[i]))
				return (i);
			i -= 1;
		}
		return (i);
	}
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char			*tstr;
	unsigned int	k;
	int				start;
	int				end;

	if (!s1)
		return (NULL);
	k = 0;
	start = check_start(s1, set);
	end = check_end(s1, set);
	if (!(tstr = ft_strdup("")))
		return (NULL);
	if ((start == 0 && end == 0) || start > end)
		return (tstr);
	if (!(tstr = malloc((end - start + 2) * sizeof(char))))
		return (NULL);
	while (start <= end)
	{
		tstr[k] = s1[start];
		start += 1;
		k += 1;
	}
	tstr[k] = '\0';
	return (tstr);
}
