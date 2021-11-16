/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:30:29 by ykassim-          #+#    #+#             */
/*   Updated: 2021/11/16 15:00:44 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_pid;

void	send_byte(char byte)
{
	int	count;

	count = 0;
	while (count < 8)
	{
		if ((byte >> count) & 1)
			kill(g_pid, SIGUSR1);
		else
			kill(g_pid, SIGUSR2);
		usleep(42);
		count++;
	}
}

int	ft_atoi(char *pid)
{
	int	i;
	int	n;

	i = -1;
	n = 0;
	while (pid[++i])
		n = n * 10 + pid[i] - 48;
	return (n);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac != 3)
		write(1, "sorry, wrong number of arguments\n", 33);
	else
	{
		i = -1;
		g_pid = ft_atoi(av[1]);
		while (av[2][++i])
			send_byte(av[2][i]);
		send_byte('\0');
	}
	return (0);
}
