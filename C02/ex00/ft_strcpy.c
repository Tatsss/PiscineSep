/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:52:40 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/10 00:12:25 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	ori[20] = "abcdeFGHIJ";
	char	ori_original[20] = "abcdeFGHIJ";
	char	ori_dest[20] = "";
	char	ori_overwrite[20] = "12345";
	char	ori_overflow[3] = "";
	char	original[20] = "abcdeFGHIJ";
	char	dest[20] = "";
	char	overwrite[20] = "12345";
	char	overflow[3] = "";

	printf("strcpy関数 Before\t\t：コピー元：%s\tコピー先：%s\n", ori_original, ori_dest);
	strcpy(ori_dest, ori_original);
	printf("strcpy関数 After\t\t：コピー元：%s\tコピー先：%s\n\n", ori_original, ori_dest);
	printf("strcpy関数 Overwrite Before\t：コピー元：%s\tコピー先：%s\n", ori_overwrite,
		ori_original);
	strcpy(ori_original, ori_overwrite);
	printf("strcpy関数 Overwrite After\t：コピー元：%s\tコピー先：%s\n\n", ori_overwrite,
		ori_original);
	printf("strcpy関数 Overflow コンパイルエラー\t：コピー元配列数：%d\tコピー先配列数：%d\n\n",
		sizeof(ori_original), sizeof(ori_overflow));
	// strcpy(ori_overflow, ori_original);
	printf("ft_strcpy実行 Before\t\t：コピー元：%s\tコピー先：%s\n", original, dest);
	ft_strcpy(dest, original);
	printf("ft_strcpy実行 After\t\t：コピー元：%s\tコピー先：%s\n\n", original, dest);
	printf("ft_strcpy実行 Overwrite Before\t：コピー元：%s\tコピー先：%s\n", overwrite,
		original);
	ft_strcpy(original, overwrite);
	printf("ft_strcpy実行 Overwrite After\t：コピー元：%s\tコピー先：%s\n\n", overwrite,
		original);
	printf("ft_strcpy実行 Overflow コンパイルエラー\t：コピー元配列数：%d\tコピー先配列数：%d\n",
		sizeof(original), sizeof(overflow));
	ft_strcpy(original, ori);
	ft_strcpy(overflow, original);
	printf("ft_strcpy実行 Overflow コンパイルエラー\t：コピー元：%s\tコピー先：%s\n\n", original,
		overflow);
	return (0);
}
