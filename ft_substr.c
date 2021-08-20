#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len < start)
		len = 0;
	else if (s_len < (start + len))
		len = s_len - start;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (ptr == NULL)
		return (NULL);
	if (start < s_len)
	{
		while (i < len && s[start + i])
		{
			ptr[i] = (char)s[start + i];
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
