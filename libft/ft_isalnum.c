/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:02:55 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 10:40:41 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((('a' <= c) && (c <= 'z')) ^ (('A' <= c)
			&& (c <= 'Z')) ^ (('0' <= c) && (c <= '9')))
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char** argv)
{
	if (argc != 2)
		return (0);
	printf("ft_isalnum: %d\nisalnum    
	: %d\n", ft_isalnum(argv[1][0]), isalnum(argv[1][0]));
	return (0);
}*/
