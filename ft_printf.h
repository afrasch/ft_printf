/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 20:16:45 by afrasch           #+#    #+#             */
/*   Updated: 2021/08/28 14:41:03 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* defines */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* includes */
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "Libft/libft.h"

/* prototypes */
int		ft_printf(const char *formatstr, ...);
void	ft_formspec(va_list args, int *count, char c);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putu(unsigned int nb, int *count);
void	ft_dec_to_hex(unsigned int nb, int *count);
void	ft_dec_to_hex_cap(unsigned int nb, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putptr(unsigned long nb, int *count);
void	ft_ptr_to_hex(unsigned long nb, int *count);

#endif
