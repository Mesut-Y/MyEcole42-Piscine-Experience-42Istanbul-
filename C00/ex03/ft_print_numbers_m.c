/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers_m.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:22:58 by myanmaz           #+#    #+#             */
/*   Updated: 2024/08/14 15:57:19 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
	char	say;
	
	say = 48;

	while (say < 58)
	{
		write(1, &say, 1);
		say++;
	}
}

int	main()
{
	ft_print_numbers();
	return (0);
}