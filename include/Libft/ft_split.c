/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:04:45 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/12 16:37:53 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contador_palabra(const char *str, char c)
{
	int	contador;
	int	palabra;

	contador = 0;
	palabra = 0;
	while (*str)
	{
		if (*str == c)
			palabra = 0;
		else if (!palabra && *str != c)
		{
			palabra = 1;
			contador++;
		}
		str++;
	}
	return (contador);
}

static char	**free_tabla(char **tabla)
{
	int	i;

	i = 0;
	while (tabla[i])
	{
		free(tabla[i]);
		i++;
	}
	free(tabla);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		str_numero;
	char	*inicio;
	char	**str_tabla;

	str_tabla = ft_calloc(contador_palabra(s, c) + 1, sizeof(char *));
	if (!str_tabla)
		return (NULL);
	str_numero = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			inicio = (char *)s;
			while (*s && *s != c)
				s++;
			str_tabla[str_numero] = ft_substr(inicio, 0, s - inicio);
			if (!str_tabla[str_numero])
				return (free_tabla(str_tabla));
			str_numero++;
		}
	}
	str_tabla[str_numero] = NULL;
	return (str_tabla);
}
