/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_m.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:45:32 by myanmaz           #+#    #+#             */
/*   Updated: 2024/08/15 17:55:19 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	<unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int a;
	int e;

	a = 0;
	e = 0;

	while ( a <= 98)
	{
		e = a + 1;
		while ( e <= 99)
		{
			putchar(a/10+'c');
			putchar(a%10 + '0');
			write(1," ",1);
			putchar(e/10 + '0');
			putchar(e%10 + '0');
			
			if ( a!=98 || e != 99)
				write(1,", ",2);
			e++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
