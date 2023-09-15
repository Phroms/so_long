/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:45:51 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/15 20:22:01 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	longitud;

	longitud = ft_strlen(s);
	if (start >= longitud)
		return (ft_strdup(""));
	if (start + len == longitud + 1 || len > longitud)
		len = longitud - start;
	substring = (char *)malloc(len + 1);
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
/*int main()
{
	char dst[] = "";
	char *p;
	p = ft_substr(dst, 5, 3);
	printf("%s", p);
}*/
