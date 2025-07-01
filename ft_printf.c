/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baelgadi <baelgadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 08:52:05 by baelgadi          #+#    #+#             */
/*   Updated: 2025/06/25 10:36:36 by baelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_conversion(va_list *args_ptr, char format)
{
	if (format == 'c')
		return (ft_putchar_len(va_arg(*args_ptr, int)));
	else if (format == 's')
		return (ft_putstr_len(va_arg(*args_ptr, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr_len(va_arg(*args_ptr, int)));
	else if (format == 'u')
		return (ft_putunbr_len(va_arg(*args_ptr, unsigned int)));
	else if (format == 'X' || format == 'x')
		return (ft_puthex_len(va_arg(*args_ptr, unsigned int), format));
	else if (format == 'p')
		return (ft_putaddr_len(va_arg(*args_ptr, unsigned long)));
	else if (format == '%')
		return (ft_putchar_len('%'));
	return (0);
}

static int	parse_and_print(const char *format, va_list *args_ptr)
{
	int	count;
	int	write_result;
	int	i;

	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			write_result = handle_conversion(args_ptr, format[i]);
		}
		else
			write_result = ft_putchar_len(format[i]);
		if (write_result == -1)
			return (-1);
		count += write_result;
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args_ptr;
	int		count;

	if (!format)
		return (-1);
	va_start(args_ptr, format);
	count = parse_and_print(format, &args_ptr);
	va_end(args_ptr);
	return (count);
}
