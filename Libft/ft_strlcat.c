/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:58:44 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/02 19:57:16 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *str, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (str[j] && (i + j + 1) < size)
	{
		dst[i + j] = str[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen((char *)str));
}
