/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:35:10 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/02 20:02:54 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = (const unsigned char *)str1;
	s = (const unsigned char *)str2;
	while (i < n)
	{
		if (d[i] != s[i])
			return (d[i] - s[i]);
		i++;
	}
	return (0);
}
