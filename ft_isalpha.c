#include "libft.h"

int	ft_isalpha(int arg)
{
	if (ft_isupper(arg) || ft_islower(arg))
		return (1);
	return (0);
}
