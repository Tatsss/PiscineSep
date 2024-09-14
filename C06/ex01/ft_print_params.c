/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:36:44 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/13 20:40:23 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

	i = 1;
	while (argc > i)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
