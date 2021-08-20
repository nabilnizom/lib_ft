#include "libft.h"

int	ft_tolower(int arg)
{
	if (ft_isupper(arg))
		arg += 32;
	return (arg);
}
