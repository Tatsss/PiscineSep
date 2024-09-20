/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:41:30 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/20 09:55:40 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:

// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100

#include <stdio.h>

char	ft_swap_bits(char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int	main(void)
{
	char	hoge;

	hoge = 't';
	printf("%c", hoge);
	hoge = ft_swap_bits(hoge);
	printf("%c", hoge);
	return (0);
}
