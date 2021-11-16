/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:30:42 by ykassim-          #+#    #+#             */
/*   Updated: 2021/11/16 14:56:42 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	put_byte(int n)
{
	static int	count;
	static char	byte;

	if (n == SIGUSR1)
		byte = byte | (1 << count);
	else
		byte = byte & ~(1 << count);
	count++;
	if (count > 7)
	{
		write(1, &byte, 1);
		count = 0;
		byte = 0;
	}
}

void	ft_putnbr(int num)
{
	int		n;
	char	ret;

	n = num;
	if (n >= 10)
		ft_putnbr(n / 10);
	ret = (n % 10) + 48;
	write(1, &ret, 1);
}

int	main(void)
{
	int	pid;

	pid = getpid();
	write(1, "PID : ", 6);
	ft_putnbr(pid);
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR1, put_byte);
		signal(SIGUSR2, put_byte);
	}
	return (0);
}
