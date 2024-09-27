
#include <unistd.h>

int	not_seen_before(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (not_seen_before(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
			i++;
		}
		while (av[2][n])
		{
			if (not_seen_before(av[1], av[2][n], i) && not_seen_before(av[2],
					av[2][n], n))
				write(1, &av[2][i], 1);
			n++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
