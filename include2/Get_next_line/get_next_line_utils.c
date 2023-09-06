/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:21:10 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/19 22:17:03 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == '\0')
		return (NULL);
	return (&s[i]);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	longitud;

	longitud = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (start > longitud)
	{
		substring = malloc(sizeof(char) * (1));
		if (!substring)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}
	if (start - len < len)
		len = longitud - start;
	substring = (char *)malloc(len + 1);
	if (!substring)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(substring, s, len + 1);
	return (substring);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = malloc(1 * sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	new_str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!s1)
		return (free_storage(s1));
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i] != '\0')
			new_str[i] = s1[i];
	while (s2[j] != '\0')
		new_str[i++] = s2[j++];
	new_str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (new_str);
}

size_t	ft_strlcpy(char *dest, char *src, size_t destsize)
{
	unsigned int	tmp;
	unsigned int	aux;

	tmp = 0;
	aux = 0;
	while (src[tmp] != '\0')
		tmp++;
	if (destsize != '\0')
	{
		while (src[aux] != '\0' && aux < (destsize - 1))
		{
			dest[aux] = src[aux];
			aux++;
		}
		dest[aux] = '\0';
	}
	return (tmp);
}
