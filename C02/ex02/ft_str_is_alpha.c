/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:57:03 by myanmaz           #+#    #+#             */
/*   Updated: 2024/08/20 22:28:04 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	bulundu;

	bulundu = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			bulundu = 1;
		else
		{
			return (0);
			break ;
		}
		i++;
	}
	if (bulundu == 1)
		return (1);
	return (1);
}
