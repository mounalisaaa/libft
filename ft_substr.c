#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	str = malloc (sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
	while (i < len && start < ft_strlen(s))
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*int main (void)
{
	char const *s = "wolrd Hello";
	char *r = ft_substr(s, 6, 10);
	printf("%s\n", r);
	return 0;
}*/
