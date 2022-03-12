/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrasch <afrasch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:19:14 by afrasch           #+#    #+#             */
/*   Updated: 2021/08/28 12:07:32 by afrasch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Create a variadic function printf with variable of type va_list.
   Use va_start macro to initialize the va_list variable to an argument list.
   If there is one, define the format specifyer, else print the string.
   Use a macro va_end to clean up the memory assigned to the va_list variable.
   Return the amount of characters printed.*/
int	ft_printf(const char *formatstr, ...)
{
	int		i;
	int		count;
	va_list	args;

	count = 0;
	va_start(args, formatstr);
	i = 0;
	while (formatstr[i])
	{
		if (formatstr[i] == '%')
		{
			i++;
			ft_formspec(args, &count, formatstr[i]);
			i++;
		}
		else
		{
			ft_putchar(formatstr[i], &count);
			i++;
		}
	}
	va_end(args);
	return (count);
}

// #include <stdio.h>
// int main()
// {
// 	int ret1 = 0;
// 	int ret2 = 0;
// 	ret1 = ft_printf("mine: %s\n", NULL);
// 	printf("mine: %d \n", ret1);
// 	ret2 = printf("orig: %s\n", NULL);
// 	printf("orig: %d\n", ret2);
// 	return(0);
// }

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	int ret1 = 0;
	int ret2 = 0;
	ret1 = ft_printf("mine: %s\n", "hello");
	printf("mine: %d \n", ret1);
	ret2 = printf("orig: %s\n", "hello");
	printf("orig: %d\n\n", ret2);

	ret1 = ft_printf("mine: %x\n", -1);
	printf("mine: %d \n", ret1);
	ret2 = printf("orig: %x\n", -1);
	printf("orig: %d\n\n", ret2);

	ret1 = ft_printf("mine: %d\n", -2147483648);
	printf("mine: %d \n", ret1);
	ret2 = printf("orig: %d\n", -2147483648);
	printf("orig: %d\n", ret2);
	return(0);
}
