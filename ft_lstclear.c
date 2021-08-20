#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list	*ptr;

	while (*lst != NULL && del != NULL)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
}
