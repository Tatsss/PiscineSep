
int	ft_atoi(const char *str)
{
	int	i;
	int	ans;
	int	negative;

	i = 0;
	ans = 0;
	negative = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10 + (str[i] - '0');
		i++;
	}
	return (ans * negative);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("234"));
// 	return (0);
// }
