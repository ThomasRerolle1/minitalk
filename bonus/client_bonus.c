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

#include "../libft/libft.h"
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
		usleep(200);
		if (c & (1 << i))
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i++;
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
	char_to_bin(pid, '\0');
	sleep(2);
	return ;
}

void	confirmation(int sig)
{
	(void)sig;
	ft_putendl_fd("message received!", 1);
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3 || !ft_strlen(argv[2]))
		return (0);
	pid = ft_atoi(argv[1]);
	signal(SIGUSR2, confirmation);
	str_to_bin(pid, argv[2]);
	return (0);
}
