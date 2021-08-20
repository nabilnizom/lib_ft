#include <stdlib.h>
#include "libft.h"

static int	digits(int	n)
{
	int	digits;

	digits = 2;
	while (n / 10 != 0)
	{
		n = n / 10;
		digits++;
	}
	if (n < 0)
		digits++;
	return (digits);
}

char	*ft_itoa(int n)
{
	unsigned int	n_uns;
	int				i;
	char			*buf;

	if (n < 0)
		n_uns = (unsigned int)(n * (-1));
	else
		n_uns = (unsigned int)(n);
	i = digits(n) - 1;
	buf = malloc(sizeof(char) * (i + 1));
	buf[i--] = '\0';
	while (n_uns >= 10)
	{
		buf[i--] = (n_uns % 10) + '0';
		n_uns = n_uns / 10;
	}
	buf[i] = (n_uns % 10) + '0';
	if (n < 0)
		buf[--i] = '-';
	return (buf);
}
