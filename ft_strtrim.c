#include <stdlib.h>
#include "libft.h"

int	trimfront(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j] && s1[i])
	{
		if (set[j] == s1[i])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

int	trimback(char const *s1, char const *set, int	len_s1)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j] && (len_s1 - 1 - i > 0))
	{
		if (set[j] == s1[len_s1 - 1 - i])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	bT;
	size_t	fT;
	char	*strim;
	size_t	i;

	bT = trimback (s1, set, ft_strlen(s1));
	fT = trimfront (s1, set);
	if (fT == ft_strlen(s1))
		bT = 0;
	strim = (char *)malloc((ft_strlen(s1) - (fT + bT) + 1) * sizeof(char));
	if (strim == NULL)
		return (NULL);
	i = 0;
	if (fT + bT < ft_strlen(s1))
	{
		while (i < (ft_strlen(s1) - (fT + bT)))
		{
			strim[i] = s1[i + fT];
			i++;
		}
	}
	strim[i] = '\0';
	return (strim);
}
