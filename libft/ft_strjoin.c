/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:07:33 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 10:40:20 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*d;
	unsigned int	size_d;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	size_d = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	d = malloc((size_d + 1) * sizeof(const char));
	if (d == NULL)
		return (NULL);
	while (s1[i])
		d[i++] = s1[j++];
	j = 0;
	while (s2[j])
		d[i++] = s2[j++];
	d[i] = '\0';
	return (d);
}
/*
int main()
{
	char const s1[] = "hello ";
	char const s2[] = "Worlddddddddddddddddddddddddddddddddddddd
	ddddddddddddddddddddddddddddddddddddddd";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
