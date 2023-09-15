/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:56:15 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/15 20:15:49 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nodo;
	t_list	*middlemans;

	nodo = *lst;
	while (nodo != NULL)
	{
		middlemans = nodo -> next;
		ft_lstdelone(nodo, del);
		nodo = middlemans;
	}
}
