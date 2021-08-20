#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*p_dst;
	unsigned char	*p_src;

	if (!dst && !src)
		return (NULL);
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (p_src < p_dst)
	{
		while (size--)
			p_dst[size] = p_src[size];
	}
	else
	{
		i = 0;
		while (i < size)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	return (dst);
}
