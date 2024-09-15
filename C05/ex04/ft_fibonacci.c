/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:39:48 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/15 16:11:38 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index <= 0)
		return (-1);
	else if (index == 1)
		return (0);
	else
		return (ft_fibonacci(index) + ft_fibonacci(index + 1));
}

int	main(int argc, char *argv[])
{
	int	result;

	result = 0;
	if (argc == 2)
		result = ft_fibonacci(atoi(argv[1]));
	printf("Answer:%d\n", result);
	return (0);
}
