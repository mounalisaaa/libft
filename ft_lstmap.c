/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melyaaco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:22:57 by melyaaco          #+#    #+#             */
/*   Updated: 2023/11/04 20:42:32 by melyaaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*curr;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	curr = head;
	while (lst->next)
	{
		new = ft_lstnew(f(lst->next->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		curr->next = new;
		curr = new;
		lst = lst->next;
	}
	curr->next = NULL;
	return (head);
}
