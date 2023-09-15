/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:16:06 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/15 20:18:07 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pointer1;
	unsigned char	*pointer2;
	size_t			i;

	pointer1 = (unsigned char *)s1;
	pointer2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && ((pointer1[i]) == ((pointer2)[i])))
	{
		i++;
	}
	return ((pointer1[i] - (pointer2[i])));
}
/*int main()
{
	char s1[] = "a ya no se que p\200oner lol";
	char s2[] = "ola ya no se que poner lal";
	printf("%d\n", ft_memcmp(s1, s2, 50));
	printf("%d\n", memcmp(s1, s2, 50));
}*/
