/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:10:34 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/11 22:15:13 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	hoge[] = "Hello World!";
	char	nullcase[] = "";
	char	fuga[] = "あいうえお";

	ft_putstr(hoge);
	ft_putstr(nullcase);
	ft_putstr(fuga);
	return (0);
}
