/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstnew.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ael-biya <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 10:35:41 by ael-biya         #+#    #+#              */
/*   Updated: 2026/10/28 13:18:20 by ael-biya        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdio.h>

int	main(void)
{
t_list	*node;
t_list	*node1;
t_list	*node2;
t_list	*node3;
char	str[] = "hello";
char	str1[] = "hello";
char	str2[] = "hello";
char	str3[] = "hello";

node = ft_lstnew(&str);
node1 = ft_lstnew(&str1);
node2 = ft_lstnew(&str2);
node3 = ft_lstnew(&str3);
node->next = node1;
node1->next = node2;
node2->next = node3;
printf("%s\n", (char *) node->content);
printf("%p\n", ft_lstnew(node->next));
printf("%s\n", (char *) node->content);
printf("%p\n", ft_lstnew(node1->next));
printf("%s\n", (char *) node->content);
printf("%p\n", ft_lstnew(node2->next));
printf("%s\n", (char *) node->content);
printf("%p\n", ft_lstnew(node3->next));
}
*/
