#include "../libft/libft.h"
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <ctype.h>

static void	charToBin(int pid, char c)
{
	int	i = 0;

	while (i < 8)
	{
		if (c & (1 << i))
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i++;
		pause();
		usleep(10);
	}
	return ;
}


static void	strToBin(int pid, char *str)
{
	while (*str)
	{
		charToBin(pid, *str);
		str++;
	}
	return ;
}

void	confirmation(int sig)
{
	(void)sig;
}

int	main(int argc, char **argv)
{
	int	pid;
		
	if (argc != 3 || !ft_strlen(argv[2]))
		return (0);
	pid = ft_atoi(argv[1]);
	signal(SIGUSR1, confirmation);
	strToBin(pid, argv[2]);
	return (0);
}
