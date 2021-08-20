#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*sjoin;
	int		i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	sjoin = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	i = 0;
	if (sjoin == NULL)
		return (NULL);
	while (s1[i])
	{
		sjoin[i] = s1[i];
		i++;
	}
	while (s2[i - len_s1])
	{
		sjoin[i] = s2[i - len_s1];
		i++;
	}
	sjoin[i] = '\0';
	return (sjoin);
}
