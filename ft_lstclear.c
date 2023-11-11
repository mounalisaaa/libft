/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melyaaco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:21:40 by melyaaco          #+#    #+#             */
/*   Updated: 2023/11/09 13:17:11 by melyaaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*tocome;

	if (!lst || !(*lst) || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		tocome = curr->next;
		ft_lstdelone(curr, del);
		curr = tocome;
	}
	*lst = NULL;
}
