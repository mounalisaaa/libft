#include "libft.h"

int count(int n)
{
	int i = 0;
	long nb = n;
	
	if (n <= 0)
	{
		nb = -n;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return(i);
}

char	*ft_itoa(int n)
{
	char *str;
	int len = count(n);
	str = malloc (sizeof(char) * (len + 1));
	if(!str)
		return(0);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	str[len--] = 0;
	while (n > 0)
	{
		str[len--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

/*int main (void)
{
	char *str = ft_itoa(-536);
	printf("%s\n", str);
	return 0;
}*/
