/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:53:55 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/09 13:13:42 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	arynum;
	int	temp;

	i = 0;
	arynum = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[arynum];
		tab[arynum] = temp;
		i++;
		arynum--;
	}
}

// int	main(void)
// {
// 	int	ary[5];
// 	int	num;
// 	int	i;

// 	num = 1;
// 	i = 0;
// 	printf("処理前配列:");
// 	while (num <= 5)
// 	{
// 		ary[i] = num;
// 		printf("%d", ary[i]);
// 		num++;
// 		i++;
// 	}
// 	ft_rev_int_tab(ary, 5);
// 	printf("\n処理後配列:");
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d", ary[i]);
// 		i++;
// 	}
// 	return (0);
// }
