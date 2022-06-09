/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:29:17 by trerolle          #+#    #+#             */
/*   Updated: 2021/12/03 10:43:16 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	c1;

	d = (unsigned char *) s;
	c1 = (unsigned char) c;
	while (n--)
	{
		if (c1 == *d)
			return ((void *) d);
		d++;
	}
	return (0);
}
/*
int	main()
{
	char s[] = {0, 1, 2, 3, 4, 5};
	void	*d = ft_memchr(s, 2 + 256, 3);
	printf("%s\n", d);

	d = memchr(s, 2 + 256, 3);
	printf("%s\n", d);
	return (0);
}*/
