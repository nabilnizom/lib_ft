#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)str;
	len = ft_strlen(ptr);
	while (len >= 0)
	{
		if (ptr[len] == (char)c)
			return (&ptr[len]);
		len--;
	}
	return (NULL);
}
