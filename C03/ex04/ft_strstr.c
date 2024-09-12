/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:38:10 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/12 10:54:44 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		n = 0;
		while (to_find[n] == str[i + n])
		{
			if (to_find[n] != '\0')
				return (&str[i]);
			n++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	hoge[] = "Hello World!";
	char	fuga[] = "el";
	char	piyo[] = "Test";
	char	ltso[] = "o";
	char	ltco[] = "O";
	char	nullcase[] = "";
	char	*result;

	result = strstr(hoge, fuga);
	printf("テストケース01：%s\n", result);
	result = strstr(hoge, piyo);
	printf("テストケース02：%s\n", result);
	result = strstr(hoge, ltso);
	printf("テストケース03：%s\n", result);
	result = strstr(hoge, ltco);
	printf("テストケース04：%s\n", result);
	result = strstr(hoge, nullcase);
	printf("テストケース05：%s\n", result);
	result = strstr(nullcase, hoge);
	printf("テストケース06：%s\n\n", result);
	result = ft_strstr(hoge, fuga);
	printf("テストケース01：%s\n", result);
	result = ft_strstr(hoge, piyo);
	printf("テストケース02：%s\n", result);
	result = ft_strstr(hoge, ltso);
	printf("テストケース03：%s\n", result);
	result = ft_strstr(hoge, ltco);
	printf("テストケース04：%s\n", result);
	result = ft_strstr(hoge, nullcase);
	printf("テストケース05：%s\n", result);
	result = ft_strstr(nullcase, hoge);
	printf("テストケース06：%s\n", result);
	return (0);
}
