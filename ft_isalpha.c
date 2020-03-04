/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goka-rop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:52:24 by goka-rop          #+#    #+#             */
/*   Updated: 2020/03/03 16:13:14 by goka-rop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	if (c > 64 && c < 91)
		return (c);
	else
		return (0);
}

static int	ft_islower(int c)
{
	if (c > 96 && c < 123)
		return (c);
	else
		return (0);
}

int			ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
