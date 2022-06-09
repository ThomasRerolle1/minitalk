/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:44:50 by trerolle          #+#    #+#             */
/*   Updated: 2021/12/03 10:44:00 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s1;

	s1 = (char *)s;
	while (*s1 != (char )c)
	{
		if (*s1 == '\0')
			return ((char *) NULL);
		s1++;
	}
	return (s1);
}
/*
int	main()
{
	char	s[] = "coucou";
	int		c = 'c' + 256;
	printf("%c\n", c);
	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
	return (0);
}*/
