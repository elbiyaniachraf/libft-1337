/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <marvin@42.fr0>                  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 13:56:33 by ael-biya         #+#    #+#              */
/*   Updated: 2026/11/04 20:16:09 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	reslt;

	i = 0;
	sign = 1;
	reslt = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			sign = -1;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (reslt > (LONG_MAX - (nptr[i] - '0')) / 10 && sign == 1)
			return ((int) LONG_MAX);
		if (reslt > (LONG_MAX - (nptr[i] - '0')) / 10 && sign == -1)
			return ((int) LONG_MIN);
		reslt = reslt * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(reslt * sign));
}
