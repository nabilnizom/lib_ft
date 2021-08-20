#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size_dst)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size_dst)
		i++;
	if (i < size_dst)
	{
		while ((i + j + 1 < size_dst) && src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	while (src[j])
		j++;
	return (i + j);
}
