/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melyaaco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:22:57 by melyaaco          #+#    #+#             */
/*   Updated: 2023/11/06 20:58:33 by melyaaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*curr;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	curr = lst;
	head = NULL;
	while (curr)
	{
		content = f(curr->content);
		new = ft_lstnew(content);
		if (!new)
		{
			ft_lstclear(&head, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		curr = curr->next;
	}
	return (head);
}
