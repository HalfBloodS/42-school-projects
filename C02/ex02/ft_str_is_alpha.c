/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:48:23 by jruzicka          #+#    #+#             */
/*   Updated: 2022/11/27 16:50:04 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a')
			|| str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
       	char *str;

	str = "azAZer";
	printf("%s - %d\n", str, ft_str_is_alpha(str));
	str = "97454qwqew";
	printf("%s - %d\n", str, ft_str_is_alpha(str));
	str = ";[];.'qwqew";
	printf("%s - %d\n", str, ft_str_is_alpha(str));
	str = "   wldqwhwqew";
	printf("%s - %d\n", str, ft_str_is_alpha(str));
}
*/
