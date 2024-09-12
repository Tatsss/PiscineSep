/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:10:34 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/12 11:04:26 by tokuda           ###   ########.fr       */
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
	char	hoge[] = "Hello World!\n";
	char	fuga[] = "あいうえお\n";
	char	nullcase[] = "";

	ft_putstr(hoge);
	ft_putstr(fuga);
	ft_putstr(nullcase);
	return (0);
}
