/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:16:30 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/22 16:52:03 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	ans;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb = -nb);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ans = (nb % 10) + '0';
	ft_putchar(ans);
}

// void	ft_putnbr(int nb)
// {
// 	if (nb == -2147483648)
// 	{
// 		ft_putchar('-');
// 		ft_putchar('2');
// 		ft_putnbr(147483648);
// 	}
// 	else if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		ft_putnbr(nb = -nb);
// 	}
// 	else if (nb >= 10)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 	}
// 	else
// 	{
// 		ft_putchar(nb + '0');
// 	}
// }

#include <stdio.h>

int	main(void)
{
	int	hoge;
	int	fuga;
	int	piyo;
	int	nullcase;
	int	negative;
	int	max_int;
	int	min_int;

	hoge = 1;
	piyo = 89;
	fuga = 12345;
	nullcase = 0;
	negative = -50;
	max_int = 2147483647;
	min_int = -2147483648;
	ft_putnbr(hoge);
	printf("\n");
	ft_putnbr(piyo);
	printf("\n");
	ft_putnbr(fuga);
	printf("\n");
	ft_putnbr(nullcase);
	printf("\n");
	ft_putnbr(negative);
	printf("\n");
	ft_putnbr(max_int);
	printf("\n");
	ft_putnbr(min_int);
	return (0);
}
