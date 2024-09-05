/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 01:42:17 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/06 02:49:09 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(void)
{
	int	count;

	count = 57;
	while (count >= 48)
	{
		write(1, &count, 1);
		count--;
	}
}

void	ft_print(void)
{
	write(1, "Hello, World!", 13);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a", 1);
	else
	{
		while (*argv[1])
		{
			if (*argv[1] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// int	main(void)
// {
// 	write(1, "1", 1);
// 	ft_countdown();
// 	ft_print();
// 	return (0);
// }
