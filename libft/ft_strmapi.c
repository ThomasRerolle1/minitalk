/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:08:22 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 09:31:49 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		i;
	int		size;

	if (!s)
		return (NULL);
	size = ft_strlen((char *)s);
	dst = (char *)malloc(sizeof(char) * (size + 1));
	if (dst == NULL)
		return (dst);
	i = 0;
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
char	function(unsigned int i, char c)
{
	
	c = (unsigned int)c + i;
	return (c);
}

int main()
{
	char	*s = "bonjour";

	printf("%s\n", ft_strmapi(s, function));
	return (0);
}*/
