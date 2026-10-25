/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   strnstr.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 18:15:11 by ael-biya         #+#    #+#              */
/*   Updated: 2026/10/17 10:55:08 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *) haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && needle[j] && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *) & haystack[i]);
		i++;
	}
	return (NULL);
}
