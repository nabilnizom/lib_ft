#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char		*ptr;
	size_t		len;
	int			i;

	i = 0;
	len = ft_strlen(str);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
