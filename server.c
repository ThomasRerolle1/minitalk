#include "./libft/libft.h"
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

struct s_character{
	char	character;
	int	current_bit;
};


static void	action(int sig, siginfo_t *info, void *context)
{
	(void)context;
	(void)info;
	static struct s_character	chr = {0, 8};

	chr.current_bit--;
	if (sig  == SIGUSR2)
		chr.character |= 1 << chr.current_bit;
	if (chr.current_bit == 0)
	{
		chr.current_bit = 8;
		ft_putchar_fd(chr.character, 1);
		chr.character = 0;
	}
	return ;
}

int	main()
{
	printf("Server PID : %d\n", getpid());
	struct sigaction	s;

	s.sa_sigaction = action;
	s.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s, NULL);
	sigaction(SIGUSR2, &s, NULL);
	while (1)
	{
		pause();
	}
	return (0);
}
