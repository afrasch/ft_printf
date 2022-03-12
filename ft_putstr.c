/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:07:37 by afrasch           #+#    #+#             */
/*   Updated: 2021/08/26 12:28:58 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Looping through str and printing the val at every index. */
void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		*count = *count + 6;
		return ;
	}
	while (s[i])
	{
		ft_putchar(s[i], count);
		i++;
	}
}
