/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:57:50 by afrasch           #+#    #+#             */
/*   Updated: 2021/08/23 12:04:55 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Printf always puts a '0x' infront of the ptr output. */
void	ft_putptr(unsigned long nbr, int *count)
{
	write(1, "0x", 2);
	*count += 2;
	ft_ptr_to_hex(nbr, count);
}

/* Void * to hex conversion
   Hex: 0123456789abcdef, therefore ('a'-10) is '0' */
void	ft_ptr_to_hex(unsigned long nb, int *count)
{
	if (nb > 15)
		ft_ptr_to_hex(nb / 16, count);
	nb = nb % 16;
	if (nb > 9)
		nb = nb + ('a' - 10);
	else
		nb = nb + '0';
	ft_putchar(nb, count);
}
