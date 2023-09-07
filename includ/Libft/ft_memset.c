/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:27:05 by agrimald          #+#    #+#             */
/*   Updated: 2023/06/06 18:05:56 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*i;
	size_t	j;

	i = (char *)b;
	j = 0;
	while (j < len)
	{
		i[j] = (char)c;
		j++;
	}
	return (b);
}
/*int main()
{
	char p[50] = "hola como estas";
	printf("antes de memset: %s\n", p);
	ft_memset(p, 'p', 5);
	printf("despues: %s\n", p);
	return (0);
}*/
