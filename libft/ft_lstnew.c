/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:08:41 by trerolle          #+#    #+#             */
/*   Updated: 2021/12/03 10:42:40 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (lst);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
/*
int main()
{
	char	*s = "hello";
	t_list	*l;

	l = ft_lstnew(s);
	printf("%s\n%p\n", (char *)l->content, l->next);
	return (0);
}*/	
