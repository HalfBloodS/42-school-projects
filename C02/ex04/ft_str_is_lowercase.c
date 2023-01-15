/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:52:27 by jruzicka          #+#    #+#             */
/*   Updated: 2022/11/27 16:53:19 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	
	str = "azklwkhf";
	printf("%s, %d\n", str, ft_str_is_lowercase(str));
	str = "35464azklwkhf";
	printf("%s, %d\n", str, ft_str_is_lowercase(str));
	str = ".';.][azklwkhf";
	printf("%s, %d\n", str, ft_str_is_lowercase(str));
	str = "   azklwkhf";
	printf("%s, %d\n", str, ft_str_is_lowercase(str));
	str = "azFSFklwkhf";
	printf("%s, %d\n", str, ft_str_is_lowercase(str));

}
*/
