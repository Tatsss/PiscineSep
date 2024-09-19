/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:19:50 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/19 12:32:56 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb = -nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	ft_lenstr(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	i;
	int	n;
	int	temp[99];

	size = ft_lenstr(base);
	i = 0;
	while (nbr != '\0')
	{
		temp[i] = nbr % size;
		nbr = nbr / size;
		i++;
	}
	n = 0;
	while (temp[n] == '\0')
	{
		printf("%d", temp[n]);
		ft_putnbr(temp[n]);
		n++;
	}
}

#include <stdio.h>

int	main(void)
{
	char	*base10;
	char	*base02;
	char	*base16;
	char	*base08;
	int		hoge;

	base10 = "0123456789";
	base02 = "01";
	base16 = "0123456789ABCDEF";
	base08 = "poneyvif";
	hoge = 2;
	ft_putnbr_base(hoge, base02);
	return (0);
}
