/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formspec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:45:09 by afrasch           #+#    #+#             */
/*   Updated: 2021/08/02 12:21:14 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Specify which of cspdiuxX% conversions is needed.
  Use va_arg macro and va_list variable to access each item in argument list.*/
void	ft_formspec(va_list args, int *count, char c)
{
	if (c == 'c')
		ft_putchar((unsigned char)va_arg(args, int), count);
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, unsigned int), count);
	if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	if (c == 'p')
		ft_putptr((unsigned long)va_arg(args, void *), count);
	if (c == 'u')
		ft_putu(va_arg(args, unsigned int), count);
	if (c == 'x')
		ft_dec_to_hex(va_arg(args, unsigned int), count);
	if (c == 'X')
		ft_dec_to_hex_cap(va_arg(args, unsigned int), count);
	if (c == '%')
		ft_putchar('%', count);
}
