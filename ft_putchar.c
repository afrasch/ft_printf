/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:59:57 by afrasch           #+#    #+#             */
/*   Updated: 2021/08/02 12:19:15 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Print one char at a time while counting them. */
void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	*count = *count + 1;
}
