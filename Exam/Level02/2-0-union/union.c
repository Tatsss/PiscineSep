
#include <unistd.h>

int	not_seen_before(char *str, int maxpos, char c)
{
	int	i;

	i = 0;
	while (i < maxpos)
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
			if (not_seen_before(av[1], i, av[1][i]))
				write(1, &av[1][i], 1);
			i++;
		}
		while (av[2][n])
		{
			if (not_seen_before(av[1], i, av[2][n]) && not_seen_before(av[2], n,
					av[2][n]))
				write(1, &av[2][n], 1);
			n++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
