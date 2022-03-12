/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexcap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:58:44 by afrasch           #+#    #+#             */
/*   Updated: 2021/08/02 12:17:48 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Capital decimal to hex converson. */
void	ft_dec_to_hex_cap(unsigned int nb, int *count)
{
	if (nb > 15)
		ft_dec_to_hex_cap(nb / 16, count);
	nb = nb % 16;
	if (nb > 9)
		nb = nb + ('A' - 10);
	else
		nb = nb + '0';
	ft_putchar(nb, count);
}
