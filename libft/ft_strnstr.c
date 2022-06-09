/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:22:26 by trerolle          #+#    #+#             */
/*   Updated: 2021/12/03 10:44:27 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dst;

	dst = (char *)haystack;
	i = 0;
	j = 0;
	if (!(*needle))
		return (dst);
	if (len == 0)
		return (0);
	while (haystack[i] != 0)
	{
		j = 0;
		while ((i + j) <= (len - 1) && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (dst + i);
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
	const char	haystack[30] = "aaabcabcd";
	const char	needle[10] = "aabc";
	(void) needle;
	printf("%s\n%s\n%s\n%s\n","m
	an function", strnstr(haystack, "cd", 8), "my function", 
	ft_strnstr(haystack, "cd", 8));
	return (0);
}*/
