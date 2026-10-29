/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <ael-biya@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 15:37:35 by ael-biya         #+#    #+#              */
/*   Updated: 2026/10/29 11:24:32 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;
	char			*last;

	if (!s)
		return (NULL);
	i = 0;
	last = NULL;
	ch = (unsigned char) c;
	while (1)
	{
		if ((unsigned char) s[i] == ch)
			last = (char *) & s[i];
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (last);
}
