/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:01:54 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/18 16:28:37 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	i = 0;
	res = 0;
	if (dstsize > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + dstsize;
	while (s[i] && (len_dst + 1) < dstsize)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}

/*
int main()
{
	printf("man function :\n");
	char	s[] = "qwertyuiop   asdf";
	char	d[100] = "zxcvbnm   , lkjhg";

	printf("%lu\n", strlcat(d, s, 9));
	printf("%s\n", d);
	printf("my function :\n");
	char	s1[] = "qwertyuiop   asdf";
	char	d1[100] = "zxcvbnm   , lkjhg";

	printf("%lu\n", ft_strlcat(d1, s1, 9));
	printf("%s\n", d1);

	return(0);
}*/
