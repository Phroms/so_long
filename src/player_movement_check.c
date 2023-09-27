/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement_check.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:00:59 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/27 17:44:26 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	valid_movements(t_game *game, int row, int col)
{
	if (game->map[row][col] == '1')
	{
		return (0);
	}
	return (1);
}

void	taking_coins(t_game *game, int row, int col)
{
	if (game->map[row][col] == 'C')
	{
		game->coins--;
		game->map[row][col] = '0';
	}
}

int	handle_exit_key(int key_pressed, t_game *game)
{
	if (key_pressed == ESC)
		end_game(game);
	return (0);
}

void	game_finish(t_game *game, int row, int col)
{
	if (game->map[row][col] == 'E' && game->coins == 0)
	{
		mlx_hook(game->win, 2, 0, handle_exit_key, game);
		draw_finish(game);
		mlx_string_put(game->mlx, game->win, (game->w_w * 32) / 2 - 20, \
				(game->h_w * 32) / 2, 0x00FFFFFF, "YOU WIN!!!");
	}
}
