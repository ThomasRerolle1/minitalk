/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:17:01 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/23 10:32:06 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		res;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (i < n - 1) && (s1[i] == s2[i]))
		i++;
	res = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (res);
}
/*
int	main()
{
	const char	s1[] = "1";
	const char	s2[] = "";
	printf("%i\n%i\n", ft_strncmp(s1, s2, 0), strncmp(s1, s2, 0));
	return (0);
}*/
