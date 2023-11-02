#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;
	char *str;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start])
	{
		if (!(ft_strchr(set, s1[start])))
			break;
		start++;
	}
	while (end >= start)
	{
		if (!(ft_strchr(set, s1[end])))
			break;
		end--;
	}
	str = malloc(sizeof(char) * (end - start + 1));
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

/*int main (void)
{
	char *r;

	r = ft_strtrim("+-+-+hello+-+-+", "+-");
	printf("%s\n", r);
	return 0;
}*/
