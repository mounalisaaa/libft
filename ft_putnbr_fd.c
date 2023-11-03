#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -n;
	}else
		nb = n;
	if (nb <= 9)
		ft_putchar_fd(nb + '0', fd);
	else
	{	
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
}
/*int main()
{
	ft_putnbr_fd(0x80000000, 1);

	return (0);
}*/
