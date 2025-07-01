/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baelgadi <baelgadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 08:52:00 by baelgadi          #+#    #+#             */
/*   Updated: 2025/06/25 08:52:26 by baelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_len(unsigned int unbr, char format)
{
	char	*base;
	int		count;
	int		write_result;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (unbr >= 16)
	{
		write_result = ft_puthex_len(unbr / 16, format);
		if (write_result == -1)
			return (-1);
		count += write_result;
	}
	write_result = ft_putchar_len(base[unbr % 16]);
	if (write_result == -1)
		return (-1);
	return (count + write_result);
}

static int	print_address(unsigned long nb)
{
	char	*base;
	int		count;
	int		write_result;

	base = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
	{
		write_result = print_address(nb / 16);
		if (write_result == -1)
			return (-1);
		count += write_result;
	}
	write_result = ft_putchar_len(base[nb % 16]);
	if (write_result == -1)
		return (-1);
	return (count + write_result);
}

int	ft_putaddr_len(unsigned long addr)
{
	int	count;
	int	write_result;

	count = 0;
	if (addr == 0)
		return (ft_putstr_len("(nil)"));
	write_result = ft_putstr_len("0x");
	if (write_result == -1)
		return (-1);
	count += write_result;
	write_result = print_address(addr);
	if (write_result == -1)
		return (-1);
	return (count + write_result);
}
