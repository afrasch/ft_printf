/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:56:58 by afrasch           #+#    #+#             */
/*   Updated: 2021/07/07 14:30:14 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(int nbr)
{
	int	digits;

	digits = 0;
	if (nbr <= 0)
		digits++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int nbr)
{
	char	*result;
	int		digits;

	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = ft_digit_count(nbr);
	result = (char *)malloc(digits + 1);
	if (!result)
		return (0);
	result[digits] = '\0';
	if (nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		--digits;
		if (nbr < 0)
			nbr *= -1;
		result[digits] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (result);
}
