/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mov.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 07:04:23 by jruzicka          #+#    #+#             */
/*   Updated: 2022/11/27 10:51:53 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
  int a = 41;
  int b = 11;
  int *div;
  int *mod;

  ft_div_mod(a, b, div, mod);

  printf("%d\n", *div);
  printf("%d\n", *mod);

  return(0);
}*/
