/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:05:12 by myanmaz           #+#    #+#             */
/*   Updated: 2024/08/27 21:43:53 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_counter;
	unsigned int	src_counter;
	unsigned int	c;

	dest_counter = 0;
	src_counter = 0;
	c = 0;
	while (dest[dest_counter])
		dest_counter++;
	while (src[src_counter])
		src_counter++;
	if (size <= dest_counter)
		src_counter = src_counter + size;
	else
		src_counter = src_counter + dest_counter;
	while (src[c] && dest_counter + 1 < size)
		dest[dest_counter++] = src[c++];
	dest[dest_counter] = '\0';
	return (src_counter);
}
