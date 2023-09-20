/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parse_rect.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:05:28 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/20 18:04:59 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	map_parse_rect(t_game *game)
{
	size_t	len;
	int 	i;

	i = 0;
	len = ft_strlen(game->map[i]);
	i++;
	while (game->map[i])
	{
		if (len != ft_strlen(game->map[i]))
			return (0);
		i++;
	}
	return (1);
}

int map_parse_walls_rows(t_game *game)
{
	int i;

	i = 0;
	cont_row_col(game);
	while (game->map[0][i] == '1')
	{
		if (game->map[0][1] != '1')
			return (1);
		i++;
	}
	i = 0;
	while (game->map[game->row - 1][i])
	{
		if (game->map[game->row - 1][i] != '1')
			return (1);
		i++;
	}
	return (0);
}

int map_parse_walls_colum(t_game *game)
{
	int i;

	i = 0;
	cont_row_col(game);
	while (game->map[i])
	{
		if (game->map[i][0] != '1' && game->map[i][game->col - 1] != '1')
			return (1);
		i++;
	}
	i = 0;
	while (game->map[i])
	{
		if (game->map[i][game->col - 1] != '1')
			return (1);
		i++;
	}
	return (0);
}

int	map_parse_walls(t_game *game)
{
	int i;

	i = 0;

	i += map_parse_walls_rows(game);
	i += map_parse_walls_colum(game);
	return (i);
}
