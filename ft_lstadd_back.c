#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	last->next = new;
	new->next = NULL;	
}
