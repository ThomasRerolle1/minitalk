/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:46:26 by trerolle          #+#    #+#             */
/*   Updated: 2021/12/03 11:42:04 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	is_space(char c)
{
	if ((c == ' ') ^ (c == '\t') ^ (c == '\v') ^ (c == '\f') ^ (c == '\r') ^ (c == '\n'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	minus;

	i = 0;
	res = 0;
	minus = 1;
	while (is_space(str[i]) == 1)
		i++;
	if ((str[i] == '+') ^ (str[i] == '-'))
	{
		if (str[i] == '-')
			minus = -minus;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * minus);
}
/*
int	main(void)
{
	char	*s = "   \t \v \f \r \n 		
	-12444444444444444444444444444444444444444444444444444
	44444444444444444443\v 434";

	printf("vrai fonction :%d\nMa fonction %d\n", atoi(s), ft_atoi(s));
	return (0);
}*/
