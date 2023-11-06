/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melyaaco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:33:25 by melyaaco          #+#    #+#             */
/*   Updated: 2023/11/06 17:58:07 by melyaaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	if (start >= len_s)
		len = 0;
	if (len_s - start < len)
		len = len_s - start;
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len && start < len_s)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
