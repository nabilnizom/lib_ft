int	ft_atoi(const char *str)
{
	char			*ptr;
	int				i;
	unsigned int	num;
	int				mult;

	mult = 1;
	num = 0;
	ptr = (char *)str;
	i = 0;
	while (ptr[i] == ' ' || (ptr[i] >= 9 && ptr[i] <= 13))
		i++;
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			mult = -1;
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9')
	{
		num = (num * 10) + (ptr[i] - '0');
		i++;
	}
	return (num * mult);
}
