/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:42:52 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 10:40:27 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_bzero(void *s, size_t n)
{
	char	*d;

	d = s;
	while (n--)
		*d++ = 0;
	return (s);
}
/*
int	main()
{
	void	*s1;
	void	*s2;
	char	d1[50] = "Hello world";
	char	d2[50] = "Hello world";
	size_t	len = 51;

	s1 = d1;
	ft_bzero(s1, len);
	s2 = d2;
   	bzero(s2, len);
	printf("ft_bzero: %s\nbzero   : %s\n", s1, s2);
	return (0);
}*/
