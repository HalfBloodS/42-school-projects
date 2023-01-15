/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 06:47:41 by jruzicka          #+#    #+#             */
/*   Updated: 2022/11/25 07:02:00 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main()
{
  int a	= 1;
  int b	= 2;

  ft_swap(&a, &b);
  return(0);
}*/
