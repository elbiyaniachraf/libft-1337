/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <marvin@42.fr0>                  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 13:56:33 by ael-biya         #+#    #+#              */
/*   Updated: 2026/11/05 15:55:42 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkov(int digit, long number, int sign)
{
	if (sign == 1 && number > (LONG_MAX - digit) / 10)
		return (-1);
	if (sign == -1 && number > (LONG_MAX - digit) / 10)
		return (0);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	int		digit;
	long	number;

	i = 0;
	number = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		digit = nptr[i++] - '0';
		if (checkov(digit, number, sign) != 1)
			return (checkov(digit, number, sign));
		number = number * 10 + digit;
	}
	return (number * sign);
}
