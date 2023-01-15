/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:11:23 by jruzicka          #+#    #+#             */
/*   Updated: 2022/12/07 14:43:57 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	while (i < power -1)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
/*int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(2, -1));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(2, 4));
	printf("%d\n", ft_iterative_power(2, 5));
	printf("%d\n", ft_iterative_power(7, 2));
	printf("%d\n", ft_iterative_power(5, 5));
	printf("%d\n", ft_iterative_power(11, 2));
	printf("%d\n", ft_iterative_power(10, 3));
	printf("%d\n", ft_iterative_power(4, 5));
}*/
