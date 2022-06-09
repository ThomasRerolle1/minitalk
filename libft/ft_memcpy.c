/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:17:04 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/03 11:18:48 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;

	if (!(char *)dst && !(char *)src)
		return (0);
	s1 = (char *)dst;
	while (n--)
		*s1++ = *(char *)src++;
	return (dst);
}
/*
int	main()
{
	void	*dst;
	const void	*src;
	char	s[50] = "hello worldddddddddddddddddddddddddddddddddddddddd";
	char	d[50];
	dst = d;
	src = s;	
	printf("%s\n", memcpy(dst, src, 19));
	printf("%s\n", ft_memcpy(dst, src, 19));
	return (0);
}
*/
