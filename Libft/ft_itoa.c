/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:25:01 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/18 16:56:54 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	numdig(int n)
{
	size_t	order;

	if (!n)
		return (1);
	order = 0;
	if (n < 0)
		order++;
	while (n != 0)
	{
		order++;
		n /= 10;
	}
	return (order);
}

char	*ft_itoa(int n)
{
	size_t	order;
	char	d;
	char	*str;

	order = numdig(n);
	str = (char *) malloc(sizeof(char) * (order + 1));
	if (str == NULL)
		return (str);
	str[order] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[--order] = '0';
	while (n != 0)
	{
		d = n % 10;
		if (d < 0)
			d = -d;
		str[--order] = d + '0';
		n /= 10;
	}
	return (str);
}
