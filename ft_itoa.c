/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:44:48 by goka-rop          #+#    #+#             */
/*   Updated: 2020/03/03 14:54:04 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(unsigned int nbr)
{
	unsigned int	size;

	size = 0;
	while (nbr >= 10)
	{
		nbr /= 10;
		size += 1;
	}
	return (size + 1);
}

static int	check_sign(int n)
{
	if (n <= 0)
		return ((unsigned int)n * (-1));
	else
		return ((unsigned int)n);
}

char		*ft_itoa(int n)
{
	char			*nbrstr;
	unsigned int	nbr;
	unsigned int	size;
	unsigned int	i;

	i = 0;
	nbr = check_sign(n);
	size = (unsigned int)count_digits(nbr);
	if (!(nbrstr = malloc((size + (n < 0 ? 2 : 1)) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		nbrstr[0] = '-';
		size += 1;
	}
	i = size - 1;
	nbrstr[size] = '\0';
	while (nbr >= 10)
	{
		nbrstr[i] = (char)(nbr % 10 + '0');
		i -= 1;
		nbr /= 10;
	}
	nbrstr[i] = (nbr + '0');
	return (nbrstr);
}
