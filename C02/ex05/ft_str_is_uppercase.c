/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:54:11 by jruzicka          #+#    #+#             */
/*   Updated: 2022/11/27 16:55:15 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	*str;

	str = "AZADJKHA";
	printf("%s, %d\n", str, ft_str_is_uppercase(str));
	str = "asadsfZADJKHA";
	printf("%s, %d\n", str, ft_str_is_uppercase(str));
	str = "44655AZADJKHA";
	printf("%s, %d\n", str, ft_str_is_uppercase(str));
	str = ".';[];AZADJKHA";
	printf("%s, %d\n", str, ft_str_is_uppercase(str));
	str = "   AZADJKHA";
	printf("%s, %d\n", str, ft_str_is_uppercase(str));
}
*/
