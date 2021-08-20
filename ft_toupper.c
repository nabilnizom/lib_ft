#include "libft.h"

int	ft_toupper(int	arg)
{
	if (ft_islower(arg))
		arg -= 32;
	return (arg);
}
