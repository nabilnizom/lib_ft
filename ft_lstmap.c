#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;

	elem = NULL;
	while (lst != NULL && f != NULL)
	{
		ft_lstadd_back(&elem, ft_lstnew (f (lst->content)));
		if (ft_lstlast(elem) == NULL)
		{
			ft_lstclear(&elem, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (elem);
}
