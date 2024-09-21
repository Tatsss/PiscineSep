/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:14:50 by rariosa-          #+#    #+#             */
/*   Updated: 2024/09/21 11:13:52 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			++j;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32)
			return (-1);
		++i;
	}
	i = 0;
	while (base[i] != '\0')
		++i;
	return (i);
}

void	i_base(int nbr, int base, char *chars)
{
	printf("チェック:%d\t%d\n", nbr, base);
	if (nbr < base)
	{
		printf("上:%d\n", chars[nbr % base]);
		ft_putchar(chars[nbr % base]);
	}
	else
	{
		printf("下再帰:%d\n", nbr / base);
		printf("下出力:%d\n", chars[nbr % base]);
		i_base(nbr / base, base, chars);
		ft_putchar(chars[nbr % base]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;

	l = len(base);
	printf("%d\n", l);
	if (l >= 2)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			i_base((nbr / l) * -1, l, base);
			ft_putchar(base[nbr % l * -1]);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			i_base(nbr * -1, l, base);
		}
		else
		{
			printf("ibase前:%d\n", nbr);
			printf("ibase前:%d\n", l);
			printf("ibase前:%s\n", base);
			i_base(nbr, l, base);
		}
	}
}

int	main(void)
{
	char	*base10;
	char	*base02;
	char	*base16;
	char	*base08;
	int		value;

	base10 = "0123456789";
	base02 = "01";
	base16 = "0123456789ABCDEF";
	base08 = "poneyvif";
	value = 144;
	ft_putnbr_base(value, base02);
	return (0);
}
