/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:26:38 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/10 16:18:52 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
		dest[i++] = '\0';
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char			ori[20] = "abcdeFGHIJ";
// 	char			original[20] = "abcdeFGHIJ";
// 	char			dest[20] = "";
// 	char			overwrite[20] = "12345";
// 	char			overflow[4] = "";
// 	unsigned int	size;
// 	unsigned int	hoge;
// 	unsigned int	fuga;

// 	size = 3;
// 	printf("ft_stlcpy実行 Before\t\t：コピー元：%s\tコピー先：%s\n", original, dest);
// 	ft_strlcpy(dest, original, size);
// 	printf("ft_strlcpy実行 After\t\t：コピー元：%s\tコピー先：%s\n\n", original, dest);
// 	printf("ft_strlcpy実行 Overwrite Before\t：コピー元：%s\tコピー先：%s\n", overwrite,
// 		original);
// 	ft_strlcpy(original, overwrite, size);
// 	printf("ft_strlcpy実行 Overwrite After\t：コピー元：%s\tコピー先：%s\n\n", overwrite,
// 		original);
// 	hoge = sizeof(original);
// 	fuga = sizeof(overflow);
// 	printf("ft_strlcpy実行 Overflow コンパイルエラー\t：コピー元配列数：%d\tコピー先配列数：%d\n", hoge,
// 		fuga);
// 	ft_strlcpy(original, ori, 10);
// 	printf("ft_strlcpy実行 Overwrite Before\t：コピー元：%s\t\tコピー先：%s\n", original,
// 		overflow);
// 	ft_strlcpy(overflow, original, size);
// 	printf("ft_strlcpy実行 Overwrite After\t：コピー元：%s\t\tコピー先：%s\n\n", original,
// 		overflow);
// 	return (0);
// }
