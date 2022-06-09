/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:04:48 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/23 16:28:27 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (s[0] == '\0')
		return (len);
	while (s[len])
	{
		len++;
	}
	return (len);
}
/*
int	main(int argc, char** argv)
{
	if (argc != 2)
		return (0);
	printf("ft_strlen: %lu\nstrlen: %lu\n", ft_strlen(argv[1]), strlen(argv[1]));
	return (0);
}*/
