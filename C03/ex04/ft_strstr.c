/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:38:10 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/11 21:16:23 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	while (str[i])
	{
		if (str[i] == to_find[i])
		{
		}
		i++;
	}
	return ('\0');
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
	printf("%s\n", result);
	result = strstr(hoge, piyo);
	printf("%s\n", result);
	result = strstr(hoge, ltso);
	printf("%s\n", result);
	result = strstr(hoge, ltco);
	printf("%s\n", result);
	result = strstr(hoge, nullcase);
	printf("%s\n", result);
	result = strstr(nullcase, hoge);
	printf("%s\n", result);
	return (0);
}
