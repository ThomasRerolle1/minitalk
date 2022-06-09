/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:01:32 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/18 17:16:00 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		i;

	s1 = (char *)s;
	i = ft_strlen(s1);
	while (0 <= i)
	{
		if (s1[i] == (char)c)
			return (s1 + i);
		i--;
	}
	return (NULL);
}

/*
int	main()
{
	const char	s[] = "abcdabcdabcdabcdxyz";
	int	c = '(';
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}
*/
