/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/23 14:16:52 by ael-biya         #+#    #+#              */
/*   Updated: 2026/10/28 13:50:27 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	*get_word(char const *s, int start, int end)
{
	char	*word;
	int		i;
	int		len;

	i = 0;
	len = end - start;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

void	free_split(char **result, int j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
}

int	fill_split(char **result, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		result[j] = get_word(s, start, i);
		if (!result[j])
		{
			free_split(result, j);
			return (0);
		}
		j++;
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;
	int		fill;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	fill = fill_split(result, s, c);
	if (fill == 0)
		return (NULL);
	return (result);
}
