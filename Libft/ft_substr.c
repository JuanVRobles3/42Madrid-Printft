/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:25:06 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/03 15:28:40 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen((char *)s);
	if (start > strlen)
		return (ft_strdup(""));
	if (strlen - start >= len)
		sstr = (char *)malloc((len + 1) * sizeof(char));
	else
		sstr = (char *)malloc((strlen - start + 1) * sizeof(char));
	if (sstr == NULL)
		return (NULL);
	ft_strlcpy(sstr, (s + start), (len + 1));
	return (sstr);
}
