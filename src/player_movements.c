/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movements.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:47:25 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/27 17:44:40 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	player_movements(t_game *game, int d_x, int d_y)
{
	if (valid_movements(game, game->x + d_x, game->y + d_y))
	{
		taking_coins(game, game->x + d_x, game->y + d_y);
		if (game->map[game->x + d_x][game->y + d_y] == 'E')
			mlx_put_image_to_window(game->mlx, game->win, game->img[3].img_ptr, \
					(game->y + d_y) * 32, (game->x + d_x) * 32);
		else
			mlx_put_image_to_window(game->mlx, game->win, game->img[2].img_ptr, \
					(game->y + d_y) * 32, (game->x + d_x) * 32);
		if (game->map[game->x][game->y] != 'E')
			mlx_put_image_to_window(game->mlx, game->win, game->img[2].img_ptr, \
					(game->y) * 32, (game->x) * 32);
		else
			mlx_put_image_to_window(game->mlx, game->win, game->img[3].img_ptr, \
					(game->y) * 32, (game->x) * 32);
		game->x += d_x;
		game->y += d_y;
		mlx_put_image_to_window(game->mlx, game->win, \
				game->img[4].img_ptr, (game->y) * 32, (game->x) * 32);
		game_finish(game, game->x, game->y);
		ft_printf("Player moves %d\n", game->moves);
		game->moves += 1;
	}
}

void	move_player_to_coordinates(t_game *game, int new_row, int new_col)
{
	int	d_x;
	int	d_y;

	d_x = new_row - game->x;
	d_y = new_col - game->y;
	player_movements(game, d_x, d_y);
}
