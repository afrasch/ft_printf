/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:56:17 by afrasch           #+#    #+#             */
/*   Updated: 2021/08/23 11:59:42 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Use recursion to split a number into its digits.
   Handle INT_MIN and negative numbers.
   Convert them into characters.
   Print every single char. */
void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648", count);
	else if (nb < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(-nb, count);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, count);
		ft_putchar((nb % 10) + '0', count);
	}
	else
		ft_putchar(nb + '0', count);
}
