/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement_check.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:00:59 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/12 19:11:35 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	valid_movements(t_game *game, int colum, int rows)
{
	if (game->map[colum][rows] == '1')
		return (0);
	return (1);
}

void	taking coins(t_game, int colum, int rows)
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
