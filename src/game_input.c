/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:35:50 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/18 18:34:52 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	game_read_keys(int key_pressed, t_game *game, int new_row, int new_col)
{
	if (key_pressed == ESC)
		end_game(game);
	if (key_pressed == KEY_UP || key_pressed == W)
		move_player_to_coordinates(game, new_row, new_col);
	else if (key_pressed == KEY_LEFT || key_pressed == A)
		move_player_to_coordinates(game, new_row, new_col);
	else if (key_pressed == KEY_DOWN || key_pressed == S)
		move_player_to_coordinates(game, new_row, new_col);
	else if (key_pressed == KEY_RIGHT || key_pressed == D)
		move_player_to_coordinates(game, new_row, new_col);
	return (0);
}
