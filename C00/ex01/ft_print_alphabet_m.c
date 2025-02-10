/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_m.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:13:14 by myanmaz           #+#    #+#             */
/*   Updated: 2024/08/14 18:49:08 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char say;
	
	say=97; //a harfinin asci karşılığı
	while(say<=122) //z harfine kadar
	{
		write(1, &say, 1);
		say++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
