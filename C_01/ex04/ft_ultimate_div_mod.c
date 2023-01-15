/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 07:15:43 by jruzicka          #+#    #+#             */
/*   Updated: 2022/11/25 07:35:13 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int *a;
	int *b;

	int v1 = 10;
	int v2 = 3;

	a = &v1;
	b = &v2;
	ft_ultimate_div_mod(a, b);
	printf("%d %d", *a, *b);
	return (0);
}
*/
