/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:23:19 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/14 12:49:27 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

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
	int	arg[argc];

	i = 1;
	while (argc > i)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(&argv[i], &argv[i + 1]);
		}
		i++;
	}
	ft_putstr(argv[i]);
	return (0);
}

// #include <stdio.h>

// void	ft_putchar(char c);

// void	ft_print_arg(char const *c)
// {
// 	int j;

// 	j = 0;
// 	while (c[j] != '\0')
// 	{
// 		ft_putchar(c[j]);
// 		++j;
// 	}
// 	ft_putchar('\n');
// }

// int		ft_strcmp(char const *s1, char const *s2)
// {
// 	int i;

// 	i = 0;
// 	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
// 		++i;
// 	return (s1[i] - s2[i]);
// }

// void	ft_swap(int *a, int *b)
// {
// 	int c;

// 	if (a && b)
// 	{
// 		c = *a;
// 		*a = *b;
// 		*b = c;
// 	}
// }

// int		main(int argc, char const *argv[])
// {
// 	int i;
// 	int j;
// 	int k;
// 	int arg[argc];

// 	i = 1;
// 	while (i < argc)
// 	{
// 		arg[i] = i;
// 		++i;
// 	}
// 	j = 1;
// 	while (j < argc)
// 	{
// 		k = j;
// 		while (k < argc)
// 		{
// 			if (ft_strcmp(argv[arg[j]], argv[arg[k]]) > 0)
// 				ft_swap(&arg[j], &arg[k]);
// 			++k;
// 		}
// 		ft_print_arg(argv[arg[j++]]);
// 	}
// 	return (0);
// }
