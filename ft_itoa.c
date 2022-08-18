/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:04:06 by jrobles-          #+#    #+#             */
/*   Updated: 2022/08/18 13:45:34 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len(long num)
{
	int	i;

	i = 1;
	if (num < 0)
	{
		i++;
		num *= -1;
	}
	while (num > 9)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		length;
	int		i;
	char	*dest;
	long	num;

	num = (long)n;
	length = len(num);
	i = length - 1;
	dest = (char *) malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (NULL);
	dest[length] = '\0';
	if (num < 0)
	{
		dest[0] = '-';
		num *= -1;
	}
	while (num > 9)
	{
		dest[i] = '0' + (num % 10);
		num /= 10;
		i--;
	}
	dest[i] = '0' + num;
	return (dest);
}
