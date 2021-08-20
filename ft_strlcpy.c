#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size_dst)
{
	size_t	n;

	n = 0;
	while (n + 1 < size_dst && src[n])
	{
		dst[n] = src[n];
		n++;
	}
	if (size_dst != 0)
		dst[n] = '\0';
	return (ft_strlen(src));
}
