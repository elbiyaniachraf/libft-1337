/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 15:37:35 by ael-biya         #+#    #+#              */
/*   Updated: 2026/10/28 13:43:27 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (1)
	{
		if (*s == (char) c)
			last = s;
		if (*s == '\0')
			break ;
		s++;
	}
	return ((char *) last);
}
