/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:00:27 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/15 20:20:44 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (destsize < 1)
		return (j);
	while (src[i] && i < destsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*int main (void)
{
	char dest[50];
	char *src;
	int size;

	src = "Hola wenasSSIWOSka885 como estas";
	size = 50;

	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
	printf("%lu\n", strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
}*/
