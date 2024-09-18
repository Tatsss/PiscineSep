/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:58:41 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/13 19:59:56 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	ans;
	int	negative;

	i = 0;
	ans = 0;
	negative = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		ans = 10 * ans + (str[i] - '0');
		i++;
	}
	return (ans * negative);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		result;
// 	char	hoge[3] = "123";
// 	char	fuga[19] = "   ---+--+1234ab567";
// 	char	foo[50] = " 		-++-+--+888fsad982j";

// 	result = ft_atoi(hoge);
// 	printf("%d\n", result);
// 	result = ft_atoi(fuga);
// 	printf("%d\n", result);
// 	result = ft_atoi(foo);
// 	printf("%d\n", result);
// 	return (0);
// }
