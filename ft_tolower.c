/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_tolower.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <marvin@42.fr0>                  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 10:52:58 by ael-biya         #+#    #+#              */
/*   Updated: 2026/10/18 12:21:36 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include  <ctype.h>
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else if( c == -1)
		return (-1);
	if(c >= -127 && c <= -2)
		return ((unsigned char)c);
	return (c);
}
// int main()
// {
// 	printf("%d\n",ft_tolower(123456)); 
// 	printf("%d\n",tolower(123456)); 
// }
