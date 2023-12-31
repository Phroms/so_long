/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:32:36 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/27 17:38:00 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	game_read_keys(int key_pressed, t_game *game)
{
	if (key_pressed == ESC)
		end_game(game);
	if (key_pressed == KEY_UP || key_pressed == W)
		move_player_to_coordinates(game, game->x - 1, game->y);
	else if (key_pressed == KEY_LEFT || key_pressed == A)
		move_player_to_coordinates(game, game->x, game->y - 1);
	else if (key_pressed == KEY_DOWN || key_pressed == S)
		move_player_to_coordinates(game, game->x + 1, game->y);
	else if (key_pressed == KEY_RIGHT || key_pressed == D)
		move_player_to_coordinates(game, game->x, game->y + 1);
	return (0);
}
