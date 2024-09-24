/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:26:38 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/24 01:57:31 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	while (src)
		len++;
	if (size == 0)
		return (len);
	while (i < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i - 1 < size)
	{
		dest[i++] = '\0';
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char			original[20] = "abcdeFGHIJ";
// 	char			dest[20] = "";
// 	char			ori[20] = "abcdeFGHIJ";
// 	char			overwrite[20] = "12345";
// 	char			overflow[4] = "";
// 	unsigned int	size;
// 	unsigned int	hoge;
// 	unsigned int	fuga;
// 	int				i;

// 	size = 10;
// 	printf("ft_strlcpy実行 Before\t\t：コピー元：%s\tコピー先：%s\n", original, dest);
// 	ft_strlcpy(dest, original, size);
// 	printf("ft_strlcpy実行 After\t\t：コピー元：%s\tコピー先：%s\n", original, dest);
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
// 	printf("NULL挙動確認：\n");
// 	i = 0;
// 	while (i < sizeof(dest))
// 	{
// 		if (dest[i] == '\0')
// 		{
// 			printf("N");
// 		}
// 		else
// 		{
// 			printf("%c", dest[i]);
// 		}
// 		i++;
// 	}
// 	return (0);
// }
