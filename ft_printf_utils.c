/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baelgadi <baelgadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 08:52:03 by baelgadi          #+#    #+#             */
/*   Updated: 2025/06/25 08:52:24 by baelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_len(char c)
{
	int	write_result;

	write_result = write(1, &c, 1);
	if (write_result == -1)
		return (-1);
	return (1);
}

int	ft_putstr_len(char *str)
{
	int	write_result;
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		write_result = ft_putchar_len(str[i]);
		if (write_result == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_putnbr_len(int nbr)
{
	int	count;
	int	write_result;

	count = 0;
	if (nbr == -2147483648)
		return (ft_putstr_len("-2147483648"));
	if (nbr < 0)
	{
		write_result = ft_putchar_len('-');
		if (write_result == -1)
			return (-1);
		nbr *= -1;
		count++;
	}
	if (nbr >= 10)
	{
		write_result = ft_putnbr_len(nbr / 10);
		if (write_result == -1)
			return (-1);
		count += write_result;
	}
	write_result = ft_putchar_len((nbr % 10) + '0');
	if (write_result == -1)
		return (-1);
	return (count + write_result);
}

int	ft_putunbr_len(unsigned int unbr)
{
	int	count;
	int	write_result;

	count = 0;
	if (unbr >= 10)
	{
		write_result = ft_putunbr_len(unbr / 10);
		if (write_result == -1)
			return (-1);
		count += write_result;
	}
	write_result = ft_putchar_len((unbr % 10) + '0');
	if (write_result == -1)
		return (-1);
	return (count + write_result);
}
