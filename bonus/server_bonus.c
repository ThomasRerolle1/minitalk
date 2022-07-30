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
#include <stdio.h>

struct s_character{
	char	character;
	int		current_bit;
	int		pid;
};

static void	action(int sig, siginfo_t *info, void *context)
{
	static struct s_character	chr = {0, 0, 0};

	if (chr.pid != info->si_pid)
	{
		chr.character = 0;
		chr.current_bit = 0;
		chr.pid = info->si_pid;
	}
	(void)context;
	if (sig == SIGUSR2)
		chr.character |= 1 << chr.current_bit;
	chr.current_bit++;
	if (chr.current_bit == 8)
	{
		if (chr.character == '\0')
		{
			ft_putstr_fd("\n", 1);
			kill(info->si_pid, SIGUSR2);
		}
		ft_putchar_fd(chr.character, 1);
		chr.current_bit = 0;
		chr.character = 0;
		usleep(100);
	}
}

int	main(void)
{
	struct sigaction	s;

	ft_putstr_fd("Server PID : ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	s.sa_handler = SIG_DFL;
	sigemptyset(&s.sa_mask);
	s.sa_sigaction = action;
	s.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s, NULL);
	sigaction(SIGUSR2, &s, NULL);
	while (1)
		pause();
	return (0);
}
