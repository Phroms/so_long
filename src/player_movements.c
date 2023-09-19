/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movements.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:47:25 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/19 18:26:40 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	player_movements(t_game *game, int row_offset, int col_offset)
{
	if (valid_movements(game, game->p_row + row_offset, game->p_col + col_offset))
	{
		taking_coins(game, game->p_row + row_offset, game->p_col + col_offset);
		if (game->map[game->p_row + row_offset][game->p_col + col_offset] == 'E')
		{
			mlx_put_image_to_window(game->mlx, game->win, game->img[3].img_ptr, \
					(game->p_col + col_offset) * 32, (game->p_row + row_offset * 32));
		}
		else
		{
			mlx_put_image_to_window(game->mlx, game->win, game->img[2].img_ptr, \
					(game->p_col + col_offset) * 32, (game->p_row + row_offset * 32));
		}
		game->p_row += row_offset;
		game->p_col += col_offset;
		mlx_put_image_to_window(game->mlx, game->win, game->img[4].img_ptr, game->p_col * 32, game->p_row * 32);
		game_finish(game, game->p_row, game->p_col);
		ft_printf("Player moves %d\n", game->moves);
		game->moves += 1;
	}
}

void	move_player_to_coordinates(t_game *game, int new_row, int new_col)
{
	int row_offset = new_row - game->p_row;
	int	col_offset = new_col - game->p_col;

	player_movements(game, row_offset, col_offset);
}
