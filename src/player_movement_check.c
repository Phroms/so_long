/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement_check.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:00:59 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/13 21:35:46 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	valid_movements(t_game *game, int colum, int rows)
{
	if (game->map[colum][rows] == '1')
		return (0);
	return (1);
}

void	taking_coins(t_game *game, int colum, int rows)
{
	if(game->map[colum][rows] == 'C')
	{
		game->coins--;
		game->map[colum][rows] = '\0';
	}
}

int	handle_exit_key(int key_pressed, t_game *game)
{
	if (key_pressed == ESC)
		end_game(game);
	return (0);
}

void	game_finish(t_game *game, int rows, int colum)
{
	if (game->map[colum][rows] == 'E' && game->coins == 0)
	{	
		mlx_hook(game->win, 2, 0, handle_exit_key, game); // el 2 y el 0 es para mantener presionado y que siga avanzando normal y que no estes dandole a cada momento la d o a;
		draw_finish(game);
		mlx_string_put(game->mlx, game->win(game->ho_row * 32) / 2 - 20, \
				(game->al_col * 32) / 2, 0x00FFFFFF, "YOU WIN!!!");
	}
}	
