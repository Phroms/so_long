/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:18:19 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/14 15:06:21 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	game_start(t_game *game)
{
	game->mlx = mlx_init();
	cont_row_col(game);
	game->win = mlx_new_window(game->mlx, game->ho_row * 32, game->al_col * 32, TITTLE);
	image_loader(game);
	draw_map(game);
	mlx_hook(game->win, 2, 0, game_read_keys, game);
	mlx_hook(game->win, 17, 0, game_destroy, game);
}

int main(int argc, char **argv)
{
	t_game	*game; // sera "d" de direccion;

	if (argc == 2)
	{
		game = (t_game *)malloc(sizeof(t_game));
		var_init(game);
		map_start(game);
		game_start(game);
		mlx_loop(game->mlx);
		mlx_destroy(game->mlx);
		free_map(game->map);
		free(game);
	}
	else
		ft_printf("Error\nMapa no apropiado.\n");
	return (0);
}
