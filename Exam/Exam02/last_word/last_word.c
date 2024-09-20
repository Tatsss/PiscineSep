/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:38:10 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/20 09:39:08 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a program that takes a string and displays its last word followed by a \n.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// // the string.

// // If the number of parameters is not 1, or there are no words,
// 	display a newline.

// // Example:

// // $> ./last_word "FOR PONY" | cat -e
// // PONY$
// // $> ./last_word "this        ...       is sparta, then again,
// 	maybe    not" | cat -e
// // not$
// // $> ./last_word "   " | cat -e
// // $
// // $> ./last_word "a" "b" | cat -e
// // $
// // $> ./last_word "  lorem,ipsum  " | cat -e
// // lorem,ipsum$
// // $>

#include <stdio.h>
#include <unistd.h>

int	ft_isblank(char str)
{
	if (str == ' ' || str == '\t')
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	n;
	int	x;

	if (argc == 2)
	{
		n = 0;
		i = ft_strlen(*argv);
		while (*argv[1])
		{
			argv[1]++;
			x++;
		}
		x -= 1;
		while (ft_isblank(*argv[1]))
		{
			i--;
			n++;
		}
		printf("%d", i);
		printf("%d", n);
		printf("%d", x);
		while (argv[i - n])
		{
			write(1, argv[n], 1);
			n++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
