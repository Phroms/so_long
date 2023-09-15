/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 21:01:11 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/15 20:21:02 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*nuevo_str;

	nuevo_str = ft_strdup(s);
	i = 0;
	if (!nuevo_str || !s || !f)
		return (NULL);
	while (s[i])
	{
		nuevo_str[i] = f(i, s[i]);
		i++;
	}
	nuevo_str[i] = '\0';
	return (nuevo_str);
}
