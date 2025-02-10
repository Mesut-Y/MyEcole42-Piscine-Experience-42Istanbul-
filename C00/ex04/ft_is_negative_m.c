/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:33:28 by myanmaz           #+#    #+#             */
/*   Updated: 2024/08/14 16:38:59 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	if (n<0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

int main(void)
{
	ft_is_negative(-1);
	return (0);
}