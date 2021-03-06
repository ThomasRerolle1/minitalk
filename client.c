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

#include "./libft/libft.h"
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <ctype.h>

static void	char_to_bin(int pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (c & (1 << i))
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i++;
		usleep(300);
	}
	return ;
}

static void	str_to_bin(int pid, char *str)
{
	while (*str)
	{
		char_to_bin(pid, *str);
		str++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3 || !ft_strlen(argv[2]))
		return (0);
	pid = ft_atoi(argv[1]);
	str_to_bin(pid, argv[2]);
	return (0);
}
