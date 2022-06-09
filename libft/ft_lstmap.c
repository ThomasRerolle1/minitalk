/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:12:51 by trerolle          #+#    #+#             */
/*   Updated: 2021/12/03 13:55:32 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		i;
	t_list	**new_list;

	i = 0;
	new_list = (t_list **)malloc(sizeof(t_list *) * ft_lstsize(lst));
	if (new_list == NULL)
		return (*new_list);
	if (lst)
		if (f)
		{
			while (lst)
			{
				new_list[i] = ft_lstnew((*f)(lst->content));
				if (!new_list[i])
				{
					ft_lstclear((&new_list)[0], del);
					return (NULL);
				}
				ft_lstadd_back(&(new_list[0]), new_list[i]);
				lst = lst->next;
				i++;
			}
		}
	return (new_list[0]);
}*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*new_list;

	new_list = NULL;
	if (!lst || !del)
		return (NULL);
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
