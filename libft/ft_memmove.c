/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:15:13 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 10:41:04 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}		
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main()
{

	void	*dst1;
	const void	*src1;
	void	*dst2;
	const void	*src2;
	char	s[50] = "hello worldddddddddddddddddddddddddddddddddddddddd";
	char	d[50] = "aaaaaa";
	dst1 = d;
	src1 = s;
	dst2 = d;
	src2 = s;
	printf("%s\n", memmove(dst1, src1, 15));
	//printf("%s\n", ft_memmove(dst2, src2, 100));
	return (0);
}*/
