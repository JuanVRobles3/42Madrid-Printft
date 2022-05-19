/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:49:17 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/02 19:51:59 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	d = str1;
	s = str2;
	i = 0;
	if (str2 == NULL && str1 == NULL)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (str1);
}
