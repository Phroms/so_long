/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:07:55 by agrimald          #+#    #+#             */
/*   Updated: 2023/05/29 16:23:07 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
	{
		i++;
	}
	return (i);
}
/*
int main(void) {
    char *cadena = "Hola mundo!";
    size_t longitud = strlen(cadena);
    printf("La longitud de la cadena \"%s\" es %zu\n", cadena, longitud);
    return 0;
}*/
