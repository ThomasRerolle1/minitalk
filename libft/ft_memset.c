/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:17:44 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 10:41:08 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = b;
	while (len)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (b);
}
/*
int	main()
{
	void	*b;
	char	d[50] = "Hello world";
	b = d;
	char	c = '$';
	size_t	len = 10;
	printf("ft_memset: %s\nmemset    : %s\n",ft_memset(b, c, len), 
   	memset(b, c, len));
	return (0);
}*/
