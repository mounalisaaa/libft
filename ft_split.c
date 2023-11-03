#include "libft.h"

int word_count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			while (str[i] && str[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char **arr;
	int	count;
	int	i;
	int j;
	int k;

	if (!s)
		return (NULL);
	count = word_count((char *)s, c);
	arr = malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (0);
	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] == c)
			i++;
		else
		{
			while (s[i + j] && s[i + j] != c)
				j++;
			arr[k] = malloc (sizeof(char) * (j + 1));
			j = 0;
			while (s[i] && s[i] != c)
				arr[k][j++] = s[i++];
			arr[k][j] = 0;
			k++;
		}
	}
	arr[k] = 0;
	return (arr);
}
/*int main (void)
{
	int count = word_count("Hello World", ' ');
	printf("%d\n", count);

	char **arr = ft_split("Hello World", ' ');
	while (count > 0)
		printf("%s\n", arr[--count]);
	return 0 ;
}*/
