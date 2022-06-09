#include "./libft/libft.h"
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
#include <ctype.h>

static void	charToBin(int pid, char c)
{
	int	i = 0;

	while (i < 8)
	{
		if (c >> i & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(1000);
		i++;
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

int	main(int argc, char **argv)
{
	int	pid;
		
	if (argc != 3 || !ft_strlen(argv[2]))
		return (0);
	pid = ft_atoi(argv[1]);
	strToBin(pid, argv[2]);
	return (0);
}
