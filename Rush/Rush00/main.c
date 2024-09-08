/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:49:27 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/08 22:18:45 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	char_to_int(char *str)
{
	int	i;
	int	ans;

	i = 0;
	ans = 0;
	while (str[i])
	{
		ans = 10 * ans + (str[i] - '0');
		i++;
	}
	return (ans);
}

int	error_check(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Error:Please put in the number between 1 to 2147483647\n",
			55);
		return (1);
	}
	if (x > 2147483647 || y > 2147483647)
	{
		write(1, "Error:Do not put a number greater than 2,147,483,648\n", 53);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	foo;
	int	bar;
	int	errorcount;

	if (argc != 3)
	{
		write(1, "Error:Please enter two command line\n", 36);
		return (0);
	}
	foo = char_to_int(argv[1]);
	bar = char_to_int(argv[2]);
	errorcount = error_check(foo, bar);
	if (errorcount != 0)
		return (0);
	rush(foo, bar);
	return (0);
}
