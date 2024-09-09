/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 01:03:27 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/09 09:49:15 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < ' ') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a'
				|| str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*mixed_upperlowercase;
	char	*special_charactercase;
	char	*nonprintable_character;
	char	*mixed_nonprintableupperlowercase;
	char	*nullcase;
	int		result;

	mixed_upperlowercase = "ABCdef";
	special_charactercase = "!@#$%^&*()_+-={}[]|\\:;\"'<>,.?/";
	nonprintable_character = "		\0";
	mixed_nonprintableupperlowercase = "ABC	def";
	nullcase = NULL;
	result = ft_str_is_printable(mixed_upperlowercase);
	printf("大小英字混在ケース：ABCdef			出力結果：%d\n", result);
	result = ft_str_is_printable(special_charactercase);
	printf("特殊文字ケース：!@#$%%^&*()_+-={}[]|\\:;\"'<>,.?/　出力結果：%d\n", result);
	result = ft_str_is_printable(nonprintable_character);
	printf("非表示文字ケース：				出力結果：%d\n", result);
	result = ft_str_is_printable(mixed_nonprintableupperlowercase);
	printf("大小英字非表示文字混在ケース：ABC	def	出力結果：%d\n", result);
	result = ft_str_is_printable(nullcase);
	printf("空のケース：					出力結果：%d\n", result);
	return (0);
}
