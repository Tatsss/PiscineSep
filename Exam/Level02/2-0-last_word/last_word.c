
#include <stdio.h>
#include <unistd.h>

int	is_whilespace(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	main(int ac, char **av)
{
	int	len;
	int	totallen;
	int	wordcount;

	if (ac == 2)
	{
		wordcount = 0;
		len = ft_strlen(av[1]);
		while (is_whilespace(av[1][len - 1]))
			len--;
		totallen = len;
		while (0 < len)
		{
			if (is_whilespace(av[1][len - 1]))
				break ;
			wordcount++;
			len--;
		}
		len = totallen - wordcount;
		while (len < totallen)
		{
			write(1, &av[1][len], 1);
			len++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
