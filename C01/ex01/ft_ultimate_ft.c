/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:23:12 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/09 11:19:44 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	hoge;
	int	*hoge1;
	int	**hoge2;
	int	***hoge3;
	int	****hoge4;
	int	*****hoge5;
	int	******hoge6;
	int	*******hoge7;
	int	********hoge8;
	int	*********hoge9;

	hoge = 100;
	printf("実行前の値：%d", hoge);
	*hoge1 = hoge;
	**hoge2 = *hoge1;
	***hoge3 = **hoge2;
	****hoge4 = ***hoge3;
	*****hoge5 = ****hoge4;
	******hoge6 = *****hoge5;
	*******hoge7 = ******hoge6;
	********hoge8 = *******hoge7;
	*********hoge9 = ********hoge8;
	printf("実行前の値：%d\n", *********hoge9);
	printf("実行前のアドレス：%p\n", &hoge9);
	ft_ultimate_ft(hoge9);
	printf("実行後の値：%d\n", *********hoge9);
	printf("実行後のアドレス：%p\n", &hoge9);
	return (0);
}
