#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j] && (i + j < len))
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*int main (void)
{
    const char* haystack = "hello World!";
    const char* needle = "W";
    size_t len = strlen(needle);

    char* result = ft_strnstr(haystack, needle, len);
    char* r = strnstr(haystack, needle, len);
	printf("%s\n", result);
	printf("%s\n", r);
	return (0);

}*/
