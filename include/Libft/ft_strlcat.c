/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:49:42 by agrimald          #+#    #+#             */
/*   Updated: 2023/06/09 17:48:53 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	long_dst;
	size_t	long_src;
	size_t	i;

	long_dst = ft_strlen(dst);
	long_src = ft_strlen(src);
	if (dstsize == 0)
		return (long_src);
	i = 0;
	while (src[i] && long_dst + i < dstsize - 1)
	{
		dst[long_dst + i] = ((char *)src)[i];
		i++;
	}
	dst[long_dst + i] = '\0';
	if (dstsize < long_dst)
		return (long_src + dstsize);
	return (long_dst + long_src);
}

/*int main(void)
{	
    char dest[20] = "ABCDEFGHIJK";
    char src[6] = "12345";

    printf("%zu\n", ft_strlcat(dest, src, 14));
    printf(".%s.\n\n", dest);

    printf("%zu\n", strlcat(dest, src, 14));
    printf(".%s.\n\n", dest);

    return 0;
}*/
