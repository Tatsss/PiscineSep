/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:19:50 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/21 20:34:17 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_basecal(int nbr, int size, char *str)
{
	if (nbr >= size)
	{
		ft_basecal(nbr / size, size, str);
		ft_putchar(str[nbr % size]);
	}
	else
		ft_putchar(str[nbr % size]);
}

int	ft_lenstr(char *str)
{
	int	count;
	int	n;

	count = 0;
	while (str[count])
	{
		n = count + 1;
		if (str[count] == '+' || str[count] == '-')
			return (-1);
		while (str[n])
		{
			if (str[count] == str[n])
				return (-1);
			n++;
		}
		count++;
	}
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = ft_lenstr(base);
	if (size >= 2)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_basecal(nbr * -1, size, base);
		}
		else
			ft_basecal(nbr, size, base);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*base10;
// 	char	*base02;
// 	char	*base16;
// 	char	*base08;
// 	char	*nullcase;
// 	char	*oneletter;
// 	char	*sameletter;
// 	char	*plus;
// 	int		value;

// 	base10 = "0123456789";
// 	base02 = "01";
// 	base16 = "0123456789ABCDEF";
// 	base08 = "poneyvif";
// 	nullcase = "";
// 	oneletter = "A";
// 	sameletter = "ponepvif";
// 	plus = "+-asfwunoe";
// 	value = -144;
// 	ft_putnbr_base(value, base02);
// 	ft_putchar('\n');
// 	ft_putnbr_base(value, base10);
// 	ft_putchar('\n');
// 	ft_putnbr_base(value, base08);
// 	ft_putchar('\n');
// 	ft_putnbr_base(value, base16);
// 	ft_putchar('\n');
// 	ft_putnbr_base(value, nullcase);
// 	ft_putchar('\n');
// 	ft_putnbr_base(value, oneletter);
// 	ft_putchar('\n');
// 	ft_putnbr_base(value, sameletter);
// 	ft_putchar('\n');
// 	ft_putnbr_base(value, plus);
// 	return (0);
// }

// https://hogehoge.tk/tool/number.html
