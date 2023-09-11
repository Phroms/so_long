/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parse_chars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:31:12 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/11 19:46:07 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../..//include/so_long.h"

int	map_parse_chars(t_game *game, char p) // p es la palabre que se va a encontrar
{
	int i;
	int flags;

	i = 0;
	flags = 0;
	while (game->map[i])
	{
		if (ft_strchr(game->map[i], p))
			flags++;
		i++;
	}
	if (p == 'E' || p == 'P')
	{
		if (flags == 0 || flags > 1)
			return (0);
	}
	else if (p == 'C')
	{
		if (flags == 0)
			return (0);
	}
	return (1);
}


