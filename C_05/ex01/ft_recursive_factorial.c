/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:11:00 by jruzicka          #+#    #+#             */
/*   Updated: 2022/12/07 14:36:21 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
}*/
