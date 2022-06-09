/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:22:22 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 10:40:47 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((0 <= c) && (c <= 127))
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
	: %d\n", ft_isascii(argv[1][0]), isascii(argv[1][0]));
	return (0);
}*/
