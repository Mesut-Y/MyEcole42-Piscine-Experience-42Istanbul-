/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 23:56:34 by myanmaz           #+#    #+#             */
/*   Updated: 2024/08/21 05:17:59 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 122)
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 122))
			if (!(str[i] >= 'A' && str[i] <= 90))
				if (!(str[i] >= 48 && str[i] <= 57))
					if ((str[i + 2] != ' '))
						if (str[i + 1] >= 97 && str[i + 1] <= 122)
							str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
