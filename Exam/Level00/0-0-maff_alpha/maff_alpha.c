/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:15:20 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/23 20:27:59 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	letter;
	char	upper;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter % 2 == 0)
		{
			upper = letter - 32;
			write(1, &upper, 1);
		}
		else
			write(1, &letter, 1);
		letter++;
	}
	write(1, "\n", 1);
	return (0);
}
