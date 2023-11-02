#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc (sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
	while (s1[j])
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
/*int main (void)
{
	char *s = "hi";
	char *t = " there";
	char *r;

	r = ft_strjoin(s, t);
	printf("%s\n", r);
	return 0;
}*/
