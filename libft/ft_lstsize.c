/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:36:49 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 10:55:52 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main()
{
	t_list	*first_element;
	t_list	**alst;
	t_list	*new;

	first_element = malloc(sizeof(t_list));
	new =  malloc(sizeof(t_list));
	alst = malloc(sizeof(t_list *));
	first_element->content = "hello";
	first_element->next = NULL;
	*alst = first_element;
	new->content = "coucou";
	new->next = NULL;
	printf("%i\n%p\n", ft_lstsize(alst[0]), alst[0]->next);
	return (0);
}*/
