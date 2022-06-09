/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:36:55 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 10:41:01 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((' ' <= c) && (c <= '~'))
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char** argv)
{
	if (argc != 2)
		return (0);
	printf("ft_isascii: %d\nisascii    
	: %d\n", ft_isprint(argv[1][0]), isascii(argv[1][0]));
	return (0);
}*/
