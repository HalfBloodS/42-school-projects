/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:11:47 by jruzicka          #+#    #+#             */
/*   Updated: 2022/12/07 14:57:02 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power != 0)
	{	
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_power(2, 5));
}*/
