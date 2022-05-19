/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrobles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:22:46 by jrobles-          #+#    #+#             */
/*   Updated: 2022/02/18 19:21:48 by jrobles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//iterar "f" a "lst" para generar una nueva vaina
//creación de una nueva lista de la sucesión de la aplicación de "f"
//se eliminan con "del" lo que haya en el nuevo lment en caso de ser necesario 

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*aux;

	if (!lst)
		return (NULL);
	lst2 = NULL;
	while (lst != NULL)
	{
		aux = ft_lstnew(f(lst->content));
		if (!(aux))
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, aux);
		lst = lst->next;
	}
	return (lst2);
}
