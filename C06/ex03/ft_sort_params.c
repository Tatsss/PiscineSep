/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:23:19 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/14 17:49:15 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int		i;
	char	newline;

	newline = '\n';
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, &newline, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	n;
	int	p;

	n = argc - 1;
	while (n > 0)
	{
		i = 1;
		while (argc - 1 > i)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(argv[i], argv[i + 1]);
			i++;
		}
		n--;
	}
	p = 1;
	while (argv[p])
	{
		ft_putstr(argv[p]);
		p++;
	}
	return (0);
}
