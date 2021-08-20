#include <stdlib.h>
#include "libft.h"

static int	n_delim(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 1;
	if (s)
		counter++;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] && s[i + 1] != c)
			counter++;
		i++;
	}
	return (counter);
}

static char	*duplicate(const char *s, int len)
{
	char	*ptr;

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	char	**ptr;

	i = -1;
	j = 0;
	ptr = (char **)malloc((n_delim(s, c)) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	len = 0;
	while (s[++i])
	{
		if (s[i] == c && len > 0)
		{
			ptr[j++] = duplicate(s + i - len, len);
			len = 0;
		}
		else if (s[i] != c)
			len++;
	}
	if (len > 0)
		ptr[j++] = duplicate(s + i - len, len);
	ptr[j] = NULL;
	return (ptr);
}
