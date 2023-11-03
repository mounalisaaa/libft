#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *curr;
	t_list *tocome;

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
