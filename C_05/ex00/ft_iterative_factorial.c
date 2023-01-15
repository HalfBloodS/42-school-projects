/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:10:39 by jruzicka          #+#    #+#             */
/*   Updated: 2022/12/07 14:27:43 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	n = nb - 1;
	while (n != 0)
	{
		nb = nb * n;
		n--;
	}
	return (nb);
}
/*int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
}*/
