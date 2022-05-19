/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:00:54 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/18 19:01:36 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copiar el string 1 en la nueva cadena
//copiar el string 2 en la nueva cadena, solo que tiene
//que ser añadida al final de la
//string 1 previamente copiada

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	strlen1;
	size_t	strlen2;
	int		total;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	strlen1 = ft_strlen((char *)s1);
	strlen2 = ft_strlen((char *)s2);
	total = strlen1 + strlen2;
	p = (char *) malloc ((total + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(&p[0], s1, strlen1 + 1);
	ft_strlcpy(&p[strlen1], s2, strlen2 + 1);
	return (p);
}
