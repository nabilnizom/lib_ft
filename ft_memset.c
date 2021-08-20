#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		((unsigned char *)str)[i++] = c;
	return (str);
}
