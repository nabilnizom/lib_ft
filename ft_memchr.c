#include <stdlib.h>

void	*ft_memchr(const void *str, int value, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)str;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)value)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
