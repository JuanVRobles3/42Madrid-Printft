/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:15:39 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/18 19:18:45 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	if (!str2 && !str1)
		return (NULL);
	if (str1 > str2)
	{
		while (len-- > 0)
		{
			((char *)str1)[len] = ((char *)str2)[len];
		}
	}
	else
		ft_memcpy(str1, str2, len);
	return (str1);
}
