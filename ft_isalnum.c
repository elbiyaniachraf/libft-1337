/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalnum.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <marvin@42.fr0>                  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/13 16:15:47 by ael-biya         #+#    #+#              */
/*   Updated: 2026/10/19 12:23:02 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isalnum('7'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('@'));
}
