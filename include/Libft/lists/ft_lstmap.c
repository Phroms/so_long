/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:18:57 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/15 20:16:24 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_nodo;
	t_list	*contenido;
	t_list	*resultado;

	if (!lst || !f || !del)
		return (NULL);
	resultado = NULL;
	while (lst)
	{
		contenido = f(lst -> content);
		new_nodo = ft_lstnew(contenido);
		if (!new_nodo)
		{
			ft_lstclear(&resultado, del);
			free(contenido);
			return (NULL);
		}
		ft_lstadd_back(&resultado, new_nodo);
		lst = lst -> next;
	}
	return (resultado);
}
