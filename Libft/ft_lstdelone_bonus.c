/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:21:43 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/18 19:23:43 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*aux;

	aux = lst;
	if (lst == NULL)
		return ;
	lst = lst -> next;
	(*del)(aux -> content);
	free (aux);
}
