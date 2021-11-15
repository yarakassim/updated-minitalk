#include "minitalk.h"

int pid;

void send_byte(char byte)
{
	int count;

	count = 0;
	while (count < 8)
	{
		if (
		count++;
	}
}

int ft_atoi(char *pid)
{
	int	i;
	int	n;

	i = -1;
	n = 0;
	while (pid[++i])
		n = n * 10 + pid[i] - 48;
}

int main(int ac, char **av)
{
	int	i;

	if (ac != 3)
		write(1, "sorry, wrong number of arguments\n", 33);
	else
	{
		i = -1;
		pid = ft_atoi(av[1]);
		while (av[2][++i])
			send_byte(av[2][i]);
	}
	return (0);
}
