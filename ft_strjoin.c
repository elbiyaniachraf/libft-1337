/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <ael-biya@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 18:48:34 by ael-biya         #+#    #+#              */
/*   Updated: 2026/10/29 11:24:15 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	len_total;
	char	*joined;

	len1 = 0;
	len2 = 0;
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len_total = len1 + len2 + 1;
	joined = malloc(len_total);
	if (!joined)
		return (NULL);
	ft_strlcpy(joined, s1, len_total);
	ft_strlcat(joined, s2, len_total);
	return (joined);
}