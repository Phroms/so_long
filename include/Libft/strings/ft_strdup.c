/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:28:47 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/15 20:19:33 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*nuevo;
	int		i;

	i = 0;
	nuevo = malloc(ft_strlen(s1) + 1);
	if (nuevo == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		nuevo[i] = s1[i];
		i++;
	}
	nuevo[i] = '\0';
	return (nuevo);
}
/*int	main(int ac, char **av)
{
	char *mio;
	char *suyo;

	if(ac == 2)
	{
		mio = ft_strdup(av[1]);
		suyo = strdup(av[1]);
		printf("ADDR:%p:%s:\nADDR:%p:%s:\n",&mio, mio, &suyo, suyo);
	}
	return (0);
}*/
