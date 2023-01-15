/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:50:39 by jruzicka          #+#    #+#             */
/*   Updated: 2022/11/27 16:51:38 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int 	main(void)
{
	char	*str;

	str = "0912345678";
	printf("%s - %d\n", str, ft_str_is_numeric(str));
	str = "ef54545etst";
	printf("%s - %d\n", str, ft_str_is_numeric(str));
	str = "12.';.][;345678";
	printf("%s - %d\n", str, ft_str_is_numeric(str));
	str = "  0912345678";
	printf("%s - %d\n", str, ft_str_is_numeric(str));
}
*/
