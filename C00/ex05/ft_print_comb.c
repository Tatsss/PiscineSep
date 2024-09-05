/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:05:30 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/05 22:17:21 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	number[3];

	number[0] = '0';
	while (number[0] <= '7')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '8')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				write(1, number[0], 1);
				write(1, number[1], 1);
				write(1, number[2], 1);
				if (number[0] == '7' && number[1] == '8' && number[2] == '9')
				{
					return ;
				}
				write(1, 44, 1);
				// ft_putchar(44);
				// ft_putchar(32);
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
