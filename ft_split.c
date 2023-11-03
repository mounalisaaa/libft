/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melyaaco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:45:03 by melyaaco          #+#    #+#             */
/*   Updated: 2023/11/03 18:23:35 by melyaaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char *str, char c)
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

char	*alloc_word(char *s, char c, int *i)
{
	int		j;
	char	*word;

	j = 0;
	while (s[*i + j] && s[*i + j] != c)
		j++;
	word = (char *)malloc(sizeof(char) * (j + 1));
	j = 0;
	while (s[*i] && s[*i] != c)
	{
		word[j++] = s[*i];
		*i += 1;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		count;
	int		i;
	int		j;
	int		k;

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
			arr[k++] = alloc_word((char *)s, c, &i);
	}
	arr[k] = 0;
	return (arr);
}
/*
int main (void)
{
	int count = word_count("Hello World", ' ');
	printf("%d\n", count);

	char **arr = ft_split("Hello World", ' ');
	while (count > 0)
		printf("%s\n", arr[--count]);
	return 0 ;
}*/
