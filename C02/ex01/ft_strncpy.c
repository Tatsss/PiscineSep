/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:45:51 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/10 16:01:19 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char			ori[20] = "abcdeFGHIJ";
// 	char			ori_original[20] = "abcdeFGHIJ";
// 	char			ori_dest[20] = "";
// 	char			ori_overwrite[20] = "12345";
// 	char			ori_overflow[4] = "";
// 	char			original[20] = "abcdeFGHIJ";
// 	char			dest[20] = "";
// 	char			overwrite[20] = "12345";
// 	char			overflow[4] = "";
// 	unsigned int	size;
// 	unsigned int	hoge;
// 	unsigned int	fuga;

// 	size = 3;
// 	printf("strncpy関数 Before\t\t：コピー元：%s\tコピー先：%s\n", ori_original, ori_dest);
// 	strncpy(ori_dest, ori_original, size);
// 	printf("strncpy関数 After\t\t：コピー元：%s\tコピー先：%s\n\n", ori_original, ori_dest);
// 	printf("strncpy関数 Overwrite Before\t：コピー元：%s\tコピー先：%s\n", ori_overwrite,
// 		ori_original);
// 	strncpy(ori_original, ori_overwrite, size);
// 	printf("strncpy関数 Overwrite After\t：コピー元：%s\tコピー先：%s\n\n", ori_overwrite,
// 		ori_original);
// 	hoge = sizeof(ori_original);
// 	fuga = sizeof(ori_overflow);
// 	printf("strncpy関数 Overflow コンパイルエラー\t：コピー元配列数：%d\tコピー先配列数：%d\n", hoge,
// 		fuga);
// 	printf("strncpy関数 Overflow Before\t\t：コピー元：%s\tコピー先：%s\n", ori_original,
// 		ori_overflow);
// 	strncpy(ori_overflow, ori_original, size);
// 	printf("strncpy関数 Overflow After\t\t：コピー元：%s\tコピー先：%s\n\n", ori_original,
// 		ori_overflow);
// 	printf("ft_strncpy実行 Before\t\t：コピー元：%s\tコピー先：%s\n", original, dest);
// 	ft_strncpy(dest, original, size);
// 	printf("ft_strncpy実行 After\t\t：コピー元：%s\tコピー先：%s\n\n", original, dest);
// 	printf("ft_strncpy実行 Overwrite Before\t：コピー元：%s\tコピー先：%s\n", overwrite,
// 		original);
// 	ft_strncpy(original, overwrite, size);
// 	printf("ft_strncpy実行 Overwrite After\t：コピー元：%s\tコピー先：%s\n\n", overwrite,
// 		original);
// 	hoge = sizeof(original);
// 	fuga = sizeof(overflow);
// 	printf("ft_strncpy実行 Overflow コンパイルエラー\t：コピー元配列数：%d\tコピー先配列数：%d\n", hoge,
// 		fuga);
// 	ft_strncpy(original, ori, 10);
// 	printf("ft_strncpy実行 Overwrite Before\t：コピー元：%s\t\tコピー先：%s\n", original,
// 		overflow);
// 	ft_strncpy(overflow, original, size);
// 	printf("ft_strncpy実行 Overwrite After\t：コピー元：%s\t\tコピー先：%s\n\n", original,
// 		overflow);
// 	return (0);
// }
