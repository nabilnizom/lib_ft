#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	uns_n;

	uns_n = 0;
	if (n < 0)
	{
		uns_n = (unsigned int)(n * -1);
		ft_putchar_fd('-', fd);
	}
	else
		uns_n = (unsigned int)n;
	if (uns_n >= 10)
		ft_putnbr_fd((uns_n / 10), fd);
	uns_n = uns_n % 10;
	ft_putchar_fd((uns_n + '0'), fd);
}
