/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:51:00 by goka-rop          #+#    #+#             */
/*   Updated: 2020/02/28 21:37:54 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int		i;
	unsigned long long	nbr;
	int					nbrsign;

	i = 0;
	nbrsign = 1;
	nbr = 0;
	while (str[i] && ((str[i] == '\r') || (str[i] == '\n') || \
				(str[i] == ' ') || (str[i] == '\t') || (str[i] == '\v') \
				|| (str[i] == '\f')))
		i += 1;
	if (str[i] == '-')
		nbrsign = -1;
	if (str[i] == '-' || str[i] == '+')
		i += 1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i += 1;
	}
	if (nbr > 9223372036854775807)
	{
		return (nbrsign == -1 ? 0 : -1);
	}
	return ((int)(nbrsign * nbr));
}
