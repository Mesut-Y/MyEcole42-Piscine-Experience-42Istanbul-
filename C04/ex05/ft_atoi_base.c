/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanmaz <myanmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 07:24:53 by myanmaz           #+#    #+#             */
/*   Updated: 2024/08/28 10:37:41 by myanmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		if (base[i] == ' ' || base[i] == '\f' || base[i] == '\n'
			|| base[i] == '\r' || base[i] == '\t' || base[i] == '\v'
			|| base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

int	ft_atoi_base_test(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base_search(char *str, int *i)
{
	int	f_sign;

	f_sign = 1;
	while (str[*i] == ' ' || str[*i] == '\f' || str[*i] == '\n'
		|| str[*i] == '\r' || str[*i] == '\t' || str[*i] == '\v')
		*i = *i + 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			f_sign *= -1;
		*i += 1;
	}
	return (f_sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		indexofbase;
	int		len_base;
	int		nbr;

	nbr = 0;
	i = 0;
	len_base = ft_atoi_base_error(base);
	if (len_base >= 2)
	{
		sign = ft_atoi_base_search(str, &i);
		indexofbase = ft_atoi_base_test(str[i], base);
		while (indexofbase != -1)
		{
			nbr = (nbr * len_base) + indexofbase;
			i++;
			indexofbase = ft_atoi_base_test(str[i], base);
		}
		return (nbr *= sign);
	}
	return (0);
}
