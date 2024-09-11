/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:16:30 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/11 22:23:28 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	while (nb)
	{
		write(1, nb, 1);
		i++;
	}
}

int	main(void)
{
	int	hoge;
	int	fuga;
	int	max_int;
	int	min_int;

	hoge = 1;
	fuga = 12345;
	max_int = 2147483647;
	min_int = -2147483648;
	ft_putnbr(hoge);
	return (0);
}
