/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:00:41 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/03 15:13:25 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	c;

	if (str2[0] == '\0')
		return ((char *)str1);
	i = 0;
	while (str1[i] != '\0' && i < n)
	{
		c = 0;
		while ((str1[i + c] == str2[c]) && (i + c) < n)
		{
			if (str2[c + 1] == '\0')
				return ((char *)(&str1[i]));
			c++;
		}
		i++;
	}
	return (NULL);
}
