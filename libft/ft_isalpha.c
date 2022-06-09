/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:58:53 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 10:40:44 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((('A' <= c) && (c <= 'Z')) ^ (('a' <= c) && (c <= 'z')))
		return (1);
	return (0);
}

/*
int	main(int argc, char** argv)
{
	if (argc != 2)
		return (0);
	printf("%d", ft_isalpha(argv[1][0]));
	return (0);
}*/
