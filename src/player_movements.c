/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movements.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:47:25 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/22 19:21:00 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

/*void player_movements(t_game *game, int row_offset, int col_offset)
{
    int new_row = game->p_row + row_offset;
    int new_col = game->p_col + col_offset;

    if (valid_movements(game, new_row, new_col))
    {
        if (game->map[game->p_row][game->p_col] != 'E')
        {
            // Borra la imagen del jugador de la posición anterior
            mlx_put_image_to_window(game->mlx, game->win, game->img[2].img_ptr,
                game->p_col * 32, game->p_row * 32);

            // Mueve al jugador y muestra la imagen del jugador en la nueva posición
            game->p_row = new_row;
            game->p_col = new_col;
            mlx_put_image_to_window(game->mlx, game->win, game->img[4].img_ptr,
                new_col * 32, new_row * 32);
        }

        if (game->map[new_row][new_col] == 'E')
        {
            game_finish(game, new_row, new_col);
        }

        ft_printf("Player moves %d\n", game->moves);
        game->moves += 1;
    }
}*/

void player_movements(t_game *game, int row_offset, int col_offset)
{
    int new_row = game->p_row + row_offset;
    int new_col = game->p_col + col_offset;

    if (valid_movements(game, new_row, new_col))
    {
        taking_coins(game, new_row, new_col);

        if (game->map[new_row][new_col] != 'E')
        {
		 mlx_put_image_to_window(game->mlx, game->win, game->img[2].img_ptr,
                game->p_col * 32, game->p_row * 32);

            game->p_row = new_row;
            game->p_col = new_col;
			mlx_put_image_to_window(game->mlx, game->win, game->img[4].img_ptr,
                new_col * 32, new_row * 32);
        }
        if (game->map[new_row][new_col] == 'E')
        { 
            game_finish(game, new_row, new_col);
        }

        ft_printf("Player moves %d\n", game->moves);
        game->moves += 1;
    }
}

/*if (valid movement == true) (esta funcion chekea si hay un 1 donde quiero ir)
 {
 	if (map[row + row_ffset][col + col_offset] == 'C')
		recoger la moneda
		pintar un 0 en el suelo
		decrementar en 1 el total de monedas

	else if ((map[row + row_ffset][col + col_offset] == 'E')
		if (comprovar si todas las monedas estan recogidas ( monedas == 0))
			exit
		else 
			muevo el jugador sin pintar nada en el suelo
	else
		es suelo, solo mover el jugador

	mover el player cargando su imagen
 */

/*void	player_movements(t_game *game, int row_offset, int col_offset)
{
	if (valid_movements(game, game->p_row + row_offset, game->p_col + col_offset))
	{
		taking_coins(game, game->p_row + row_offset, game->p_col + col_offset);
		if (game->map[game->p_row + row_offset][game->p_col + col_offset] == 'E')
		{
			mlx_put_image_to_window(game->mlx, game->win, game->img[3].img_ptr, \
					(game->p_col + col_offset) * 32, (game->p_row + row_offset) * 32);
		}
		else
		{
			mlx_put_image_to_window(game->mlx, game->win, game->img[2].img_ptr, \
					(game->p_col + col_offset) * 32, (game->p_row + row_offset) * 32);
		}
		if (game->map[game->p_row][game->p_col] != 'E')
		{
			mlx_put_image_to_window(game->mlx, game->win, game->img[2].img_ptr, \
					(game->p_col) * 32, (game->p_row) * 32);
		}
		game->p_row += row_offset;
		game->p_col += col_offset;
		mlx_put_image_to_window(game->mlx, game->win, game->img[4].img_ptr, (game->p_col) * 32, (game->p_row) * 32);

		game_finish(game, game->p_row, game->p_col);
		ft_printf("Player moves %d\n", game->moves);
		game->moves += 1;
	}
}*/

void	move_player_to_coordinates(t_game *game, int new_row, int new_col)
{
	int row_offset = new_row - game->p_row;
	int	col_offset = new_col - game->p_col;

	player_movements(game, row_offset, col_offset);
}
