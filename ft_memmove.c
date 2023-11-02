#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	
	if (src > dst)
		return (ft_memcpy(d, s, len));
	while (len > 0)
	{
		d[len - 1] = s[len - 1];
		len--;
	}
	return (d);
}

/*int main(void)
{
	char str[] = "abcde";
	char *ans = ft_memmove(str, str + 2, 3);
	printf("%s\n", ans);
	return (0);
}*/
