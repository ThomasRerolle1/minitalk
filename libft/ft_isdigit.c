/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:51:41 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 10:40:53 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (('0' <= c) && (c <= '9'))
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char** argv)
{
	if (argc != 2)
		return (0);
	printf("ft_isdigit : %d\nisdigit   
	: %d", ft_isdigit(argv[1][0]), isdigit(argv[1][0]));
	return (0);
}

*/
