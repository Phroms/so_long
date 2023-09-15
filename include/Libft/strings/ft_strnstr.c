/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:24:19 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/15 20:21:21 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	p = (char *)haystack;
	if (needle[0] == '\0')
		return (p);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				p = (char *)(haystack + i);
				return (p);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char s1[] = "hola buenas como estas, soy manolo";
	char s2[] = "n";
	printf("%s\n", ft_strnstr(s1, s2, 66));
	printf("%ld\n", ft_strnstr(s1, s2, 66) - s1);
	printf("%s\n", strnstr(s1, s2, 66));
	printf("%ld\n", strnstr(s1, s2, 66) - s1);
}*/
