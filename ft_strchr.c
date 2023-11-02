#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
/*int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '\0';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/
