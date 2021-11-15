#include "minitalk.h"

void put_byte(int n)
{

}

void ft_putnbr(int num)
{
	int	n;
	char	ret;

	n = num;
	if (n >= 10)
		ft_putnbr(n / 10);
	ret = (n % 10) + 48;
	write(1, &ret, 1);
}

int main(void)
{
	int	pid;

	pid = getpid();
	ft_putnbr(pid);
	while (1)
	{
		signal(SIGUSR1, put_byte);
		signal(SIGUSR2, put_byte);
		pause();
	}
	return (0);
}
