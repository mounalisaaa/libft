#include "libft.h"

int count(int n)
{
	int i = 0;
	unsigned int  nb;
	
	if (n <= 0)
	{
		nb = -n;
		i++;
	}else
		nb = n;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	//	printf("%d\n", i);
	}
	return(i);
}

char	*ft_itoa(int n)
{
	char *str;
	int len = count(n);
	unsigned int nb;

	str = malloc (sizeof(char) * (len + 1));
	if(!str)
		return(0);
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}else
		nb = n;
	if (n == 0)
		str[0] = '0';
	str[len--] = 0;
	while (nb > 0)
	{
		str[len--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

/*int main (void)
{
	char *str = ft_itoa(-2147483648);
	printf("%s\n", str);
	return 0;
}*/
