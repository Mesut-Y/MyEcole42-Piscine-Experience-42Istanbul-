/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:17:45 by myanmaz           #+#    #+#             */
/*   Updated: 2024/09/06 01:33:24 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str1;

	i = 0;
	while (src[i])
		i++;
	str1 = (char *)malloc(sizeof(char) * (i + 1));
	if (str1 == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		str1[i] = src[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
