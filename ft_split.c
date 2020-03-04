/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:47:55 by goka-rop          #+#    #+#             */
/*   Updated: 2020/03/03 15:15:33 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] != c)
		count += 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count += 1;
		}
		i += 1;
	}
	return (count);
}

static size_t	count_letters(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i += 1;
	return (i);
}

char			**ft_split(char const *s, char c)
{
	unsigned int	word_len;
	char			**str;
	unsigned int	n_words;
	int				i;

	if (!s)
		return (NULL);
	word_len = 0;
	n_words = count_words(s, c);
	if (!(str = ft_calloc((n_words + 1), sizeof(char *))))
		return (NULL);
	i = 0;
	n_words = 0;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			word_len = count_letters(&s[i], c);
			str[n_words] = ft_substr(s, i, word_len);
			n_words += 1;
			i += (word_len - 1);
		}
		i += 1;
	}
	return (str);
}
