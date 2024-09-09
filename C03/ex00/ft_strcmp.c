/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:47:31 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/10 02:05:07 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	original[] = "ABCDE";
	char	same[] = "ABCDE";
	char	diffplus[] = "BBCDE";
	char	diffminus[] = "@BCDEF";
	int		result;

	result = strcmp(original, same);
	printf("strcmp関数 同じケース\t：%d\n", result);
	result = strcmp(original, diffplus);
	printf("strcmp関数 プラスに異なるケース\t：%d\n", result);
	result = strcmp(original, diffminus);
	printf("strcmp関数 マイナスに異なるケース\t：%d\n", result);
	// ft_strcmp(hoge, fuga);
	return (0);
}
