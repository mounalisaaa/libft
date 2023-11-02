#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;
	t_list *curr;
	t_list *new;

	head = ft_lstnew(lst->content);
	curr = head;
	while (lst->next)
	{
		new = ft_lstnew(f(lst->next->content));
		if (!new)
			ft_lstdelone(new, del);
		else
		{
			curr->next = new;
			curr = new;
		}
		lst = lst->next;
	}
	curr->next = NULL;
	return (head);
}
