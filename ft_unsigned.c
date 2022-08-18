/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:25:42 by jrobles-          #+#    #+#             */
/*   Updated: 2022/08/09 13:25:44 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_len(unsigned	int m)
{
	int	length;

	length = 0;
	while (m != 0)
	{
		length++;
		m = m / 10;
	}
	return (length);
}

char	*ft_uitoa(unsigned int n)
{
	int		length;
	char	*num;

	length = ft_num_len(n);
	num = (char *)malloc(sizeof(char) * (length + 1));
	if (!num)
		return (0);
	num[length] = '\0';
	while (n != 0)
	{
		num[length - 1] = n % 10 + 48;
		n = n / 10;
		length--;
	}
	return (num);
}

int	ft_unsigned(unsigned int n)
{
	int		length;
	char	*num;

	length = 0;
	if (n == 0)
		length += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		length += ft_putstr(num);
		free(num);
	}
	return (length);
}
