#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
/*int main() {
    const char str1[] = "Hella";
    const char str2[] = "Hello";
    int result;
	int result1;

    result = memcmp(str1, str2, sizeof(str1));
    result1 = ft_memcmp(str1, str2, sizeof(str1));
	printf("%d\n", result);
	printf("%d\n", result1);
	return (0);
}*/
