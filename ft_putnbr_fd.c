#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	n = nb;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -nb;
	}
	if (n <= 9)
		ft_putchar_fd(n + '0', fd);
	else
	{	
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
