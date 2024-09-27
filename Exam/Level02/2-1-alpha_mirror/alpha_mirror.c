
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_alpha_mirror(int c)
{
	if (c >= 'A' && c <= 'Z')
		return ('Z' - (c - 'A'));
	else if (c >= 'a' && c <= 'z')
		return ('z' - (c - 'a'));
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
			ft_putchar(ft_alpha_mirror(av[1][i]));
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
