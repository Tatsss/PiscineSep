/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:47:31 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/11 18:27:49 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] || s1[0] == '\0')
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	original[] = "ABCDE";
	char	same[] = "ABCDE";
	char	diffoneup[] = "BBCDE";
	char	diffonedown[] = "@BCDEF";
	char	null[] = "\0";
	char	del[] = "\x7f";
	int		result;

	result = strcmp(original, same);
	printf("strcmp関数 同じケース\t\t\t：%d\n", result);
	result = strcmp(original, diffoneup);
	printf("strcmp関数 マイナスに異なるケース\t：%d\n", result);
	result = strcmp(original, diffonedown);
	printf("strcmp関数 プラスに異なるケース\t\t：%d\n", result);
	result = strcmp(del, null);
	printf("strcmp関数 最大値プラス\t\t\t：%d\n", result);
	result = strcmp(null, del);
	printf("strcmp関数 最小値マイナス\t\t：%d\n\n", result);
	result = ft_strcmp(original, same);
	printf("挙動確認 同じケース\t\t\t：%d\n", result);
	result = ft_strcmp(original, diffoneup);
	printf("挙動確認 マイナスに異なるケース\t\t：%d\n", result);
	result = ft_strcmp(original, diffonedown);
	printf("挙動確認 プラスに異なるケース\t\t：%d\n", result);
	result = ft_strcmp(del, null);
	printf("挙動確認 最大値プラス\t\t\t：%d\n", result);
	result = ft_strcmp(null, del);
	printf("挙動確認 最小値マイナス\t\t\t：%d\n", result);
	return (0);
}
