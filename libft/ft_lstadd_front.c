/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:15:31 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/17 18:36:31 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
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
	ft_lstadd_front(alst, new);
	printf("%s\n", alst[0]->content);
	return (0);
}*/
