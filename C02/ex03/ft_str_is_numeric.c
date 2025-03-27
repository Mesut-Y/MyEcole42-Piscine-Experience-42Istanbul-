/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:30:10 by myanmaz           #+#    #+#             */
/*   Updated: 2024/08/20 22:30:11 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	bulundu;

	bulundu = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57))
		{
			bulundu = 1;
		}
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
