/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:16:49 by jrobles-          #+#    #+#             */
/*   Updated: 2022/08/18 13:46:33 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_format(va_list args, const char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count += ft_putptr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		count += ft_printnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_puthexa(va_arg(args, unsigned int), c);
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			c += ft_format(args, format[++i]);
		else
			c += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (c);
}
