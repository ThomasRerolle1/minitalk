/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:00:54 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/18 15:39:51 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (0);
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}		
	return (0);
}
/*
int	main()
{
	const void	*s1;
	const void	*s2;
	char		str1[] = "coucou";
	char		str2[] = "cotcou";
	s1 = str1;
	s2 = str2;
	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("%d\n", memcmp(s1, s2, 3));
	return (0);
}*/
