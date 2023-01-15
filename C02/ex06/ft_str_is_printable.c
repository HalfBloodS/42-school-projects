/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:56:14 by jruzicka          #+#    #+#             */
/*   Updated: 2022/11/27 16:57:27 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
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

	str = "adw";
	printf("%s, %d\n", str, ft_str_is_printable(str));
	str = "15zcSAFw";
	printf("%s, %d\n", str, ft_str_is_printable(str));
	str = "/.,';][";
	printf("%s, %d\n", str, ft_str_is_printable(str));
	str = "   adw";
	printf("%s, %d\n", str, ft_str_is_printable(str));
	str = "	";
	printf("%s, %d\n", str, ft_str_is_printable(str));
}*/
