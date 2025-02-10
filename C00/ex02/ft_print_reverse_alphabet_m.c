/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet_m.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:09:07 by myanmaz           #+#    #+#             */
/*   Updated: 2024/08/15 15:02:04 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	say;

	say = 122;
	while (say >= 97)
	{
		write(1, &say, 1);
		say--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
