/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:51:06 by myanmaz           #+#    #+#             */
/*   Updated: 2024/08/20 22:53:21 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	bulundu;

	bulundu = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			bulundu = 1;
		else
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}
