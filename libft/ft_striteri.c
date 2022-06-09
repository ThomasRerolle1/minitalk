/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trerolle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:57:20 by trerolle          #+#    #+#             */
/*   Updated: 2021/11/24 12:25:55 by trerolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	function(unsigned int i, char *s)
{
	(void)i;
	*s += 1;
}

int	main()
{
	char	s[100] = "hellooooooooooo";

	ft_striteri(s, function);
	printf("%s\n", s);
	return (0);
}*/
