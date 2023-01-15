/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:12:43 by jruzicka          #+#    #+#             */
/*   Updated: 2022/12/07 15:21:03 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	while (a * a <= nb)
	{
		if (a * a == nb)
		{
			return (a);
		}
		if (a > 46340)
		{
			return (0);
		}
		++a;
	}
	return (0);
}
/*int	main(void)
{
	printf("0 sqrt = %d\n", ft_sqrt(0));
	printf("1 sqrt = %d\n", ft_sqrt(1));
	printf("25 sqrt = %d\n", ft_sqrt(25));
	printf("49 sqrt = %d\n", ft_sqrt(49));
	printf("81 sqrt = %d\n", ft_sqrt(81));
	printf("100 sqrt = %d\n", ft_sqrt(100));
	printf("121 sqrt = %d\n", ft_sqrt(121));
	printf("-9 sqrt = %d\n", ft_sqrt(-9));
}*/
