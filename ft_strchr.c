#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)str;
	len = ft_strlen((char *)str);
	while (len-- >= 0)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
