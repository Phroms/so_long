/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:29:12 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/20 21:17:05 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	draw_walls_and_path(t_game *game)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (game->map[++i])
	{
		while (game->map[i][j])
		{
			if (game->map[i][j] == '1')
				mlx_put_image_to_window(game->mlx, game->win, \
						game->img[0].img_ptr, j * 32, i * 32);
			if (game->map[i][j] == '0' || game->map[i][j] == 'P' || \
					game->map[i][j] == 'E' || game->map[i][j] == 'C')
				mlx_put_image_to_window(game->mlx, game->win, \
						game->img[2].img_ptr, j * 32, i * 32);
			j++;
		}
		j = 0;
	}
}

void	draw_entities(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == 'P')
				mlx_put_image_to_window(game->mlx, game->win, \
						game->img[4].img_ptr, j * 32, i * 32);
			if (game->map[i][j] == 'C')
			{
				mlx_put_image_to_window(game->mlx, game->win, \
						game->img[1].img_ptr, j * 32, i * 32);
				game->coins++;
			}
			if (game->map[i][j] == 'E')
				mlx_put_image_to_window(game->mlx, game->win, \
						game->img[3].img_ptr, j * 32, i * 32);
			j++;
		}
		i++;
	}
}

void	draw_finish(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			mlx_put_image_to_window(game->mlx, game->win, game->img[0].img_ptr, \
					j * 32, i * 32);
			j++;
		}
		i++;
	}
}

void	draw_map(t_game *game)
{
	draw_walls_and_path(game);
	draw_entities(game);
}
