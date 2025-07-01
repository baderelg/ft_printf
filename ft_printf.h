/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baelgadi <baelgadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 08:52:07 by baelgadi          #+#    #+#             */
/*   Updated: 2025/06/25 08:52:23 by baelgadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar_len(char c);
int	ft_putstr_len(char *str);
int	ft_putnbr_len(int nbr);
int	ft_putunbr_len(unsigned int unbr);
int	ft_puthex_len(unsigned int unbr, char format);
int	ft_putaddr_len(unsigned long addr);

#endif
