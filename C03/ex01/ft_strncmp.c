/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:34:40 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/11 18:33:49 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	while (i < n || s1[0] == '\0')
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
	char	diffoneup[] = "ABZDE";
	char	diffonedown[] = "AB@DEF";
	char	null[] = "AB\0";
	char	del[] = "AB\x7f";
	int		result;
	int		size;

	size = 3;
	result = strncmp(original, same, size);
	printf("strncmp関数 同じケース\t\t\t：%d\n", result);
	result = strncmp(original, diffoneup, size);
	printf("strncmp関数 マイナスに異なるケース\t：%d\n", result);
	result = strncmp(original, diffonedown, size);
	printf("strncmp関数 プラスに異なるケース\t：%d\n", result);
	size = 2;
	result = strncmp(original, diffonedown, size);
	printf("strncmp関数 先頭2文字ケース\t\t：%d\n", result);
	size = 3;
	result = strncmp(del, null, size);
	printf("strncmp関数 最大値プラス\t\t：%d\n", result);
	result = strncmp(null, del, size);
	printf("strncmp関数 最小値マイナス\t\t：%d\n\n", result);
	result = ft_strncmp(original, same, size);
	printf("挙動確認 同じケース\t\t\t：%d\n", result);
	result = ft_strncmp(original, diffoneup, size);
	printf("挙動確認 マイナスに異なるケース\t\t：%d\n", result);
	result = ft_strncmp(original, diffonedown, size);
	printf("挙動確認 プラスに異なるケース\t\t：%d\n", result);
	size = 2;
	result = strncmp(original, diffonedown, size);
	printf("挙動確認 先頭2文字ケース\t\t：%d\n", result);
	size = 3;
	result = ft_strncmp(del, null, size);
	printf("挙動確認 最大値プラス\t\t\t：%d\n", result);
	result = ft_strncmp(null, del, size);
	printf("挙動確認 最小値マイナス\t\t\t：%d\n", result);
	return (0);
}
