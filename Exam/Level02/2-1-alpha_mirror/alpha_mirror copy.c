
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	alpha_mirror(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = 'Z' - (c - 'A');
		return (c);
	}
	else if (c >= 'a' && c <= 'z')
	{
		c = 'z' - (c - 'a');
		return (c);
	}
	return (c);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			ft_putchar(alpha_mirror(av[1][i]));
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
