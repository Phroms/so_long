/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:37:32 by agrimald          #+#    #+#             */
/*   Updated: 2023/08/30 15:11:26 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nodo;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	nodo = ft_lstlast(*lst);
	nodo -> next = new;
}
