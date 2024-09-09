/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:14:43 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/10 00:37:07 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
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
	int		size;

	printf("strcpy関数 Before\t\t：コピー元：%s\tコピー先：%s\n", ori_original, ori_dest);
	strlcpy(ori_dest, ori_original, size);
	printf("strcpy関数 After\t\t：コピー元：%s\tコピー先：%s\n\n", ori_original, ori_dest);
	printf("strcpy関数 Overwrite Before\t：コピー元：%s\tコピー先：%s\n", ori_overwrite,
		ori_original);
	strlcpy(ori_original, ori_overwrite, size);
	printf("strcpy関数 Overwrite After\t：コピー元：%s\tコピー先：%s\n\n", ori_overwrite,
		ori_original);
	// strcpy(ori_overflow, ori_original);
	printf("ft_strcpy実行 Before\t\t：コピー元：%s\tコピー先：%s\n", original, dest);
	ft_strlcpy(dest, original, size);
	printf("ft_strcpy実行 After\t\t：コピー元：%s\tコピー先：%s\n\n", original, dest);
	printf("ft_strcpy実行 Overwrite Before\t：コピー元：%s\tコピー先：%s\n", overwrite,
		original);
	ft_strlcpy(original, overwrite, size);
	printf("ft_strcpy実行 Overwrite After\t：コピー元：%s\tコピー先：%s\n\n", overwrite,
		original);
	ft_strlcpy(original, ori, size);
	ft_strlcpy(overflow, original, size);
	printf("ft_strcpy実行 Overflow コンパイルエラー\t：コピー元：%s\tコピー先：%s\n\n", original,
		overflow);
	return (0);
}
