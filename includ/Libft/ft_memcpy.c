/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:55:17 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/11 15:39:30 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*chr_dest;
	char	*chr_src;

	chr_dest = (char *)dest;
	chr_src = (char *)src;
	if (n == 0 || (dest == 0 && src == 0))
		return (dest);
	i = 0;
	while (i < n)
	{
		chr_dest[i] = chr_src[i];
		i++;
	}
	return ((void *)chr_dest);
}
