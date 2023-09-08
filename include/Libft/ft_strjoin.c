/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:08:48 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/14 19:09:22 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nueva_str;
	size_t	longitud_s1;
	size_t	longitud_s2;

	if (!(s1 && s2))
		return (ft_strdup(""));
	longitud_s1 = ft_strlen(s1);
	longitud_s2 = ft_strlen(s2);
	nueva_str = malloc(longitud_s2 + longitud_s1 + 1);
	if (!nueva_str)
		return (NULL);
	ft_strlcpy(nueva_str, s1, longitud_s1 + 1);
	ft_strlcpy(nueva_str + longitud_s1, s2, longitud_s2 + longitud_s1 + 1);
	return (nueva_str);
}
/*int main()
{
	const char *g = "Hola";
    const char *h = "mundo";
    char *resultado = ft_strjoin(g, h);
   	printf("Resultado: %s\n", resultado);
}*/
