/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:28:31 by afrasch           #+#    #+#             */
/*   Updated: 2021/08/23 11:53:25 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* decimal to hex conversion */
void	ft_dec_to_hex(unsigned int nb, int *count)
{
	if (nb > 15)
		ft_dec_to_hex(nb / 16, count);
	nb = nb % 16;
	if (nb > 9)
		nb = nb + ('a' - 10);
	else
		nb = nb + '0';
	ft_putchar(nb, count);
}
