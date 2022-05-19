/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:38:50 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/02 20:00:50 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	character;

	ptr = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == character)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
