#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *curr;
	t_list *tocome;

	curr = *lst;
	while (curr->next)
	{
		tocome = curr->next;
		ft_lstdelone(curr, del);
		curr = tocome;
	}
	free(*lst);
}
