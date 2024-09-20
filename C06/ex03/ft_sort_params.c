/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:23:19 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/21 03:19:26 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 != '\0')
		return (*s1);
	if (*s2 != '\0')
		return (-*s2);
	return (0);
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
	int	n;
	int	p;
	int	i;

	n = argc - 1;
	while (n > 0)
	{
		i = 1;
		while (argc - 1 > i)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(&argv[i], &argv[i + 1]);
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
