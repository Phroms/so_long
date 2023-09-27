/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:18:19 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/27 17:45:06 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	game_dimension(t_game *game)
{
	int	i;

	i = 0;
	while (game->map[i])
		i++;
	game->h_w = i;
	game->w_w = ft_strlen(game->map[0]);
}

void	game_start(t_game *game)
{
	game->mlx = mlx_init();
	game_dimension(game);
	game->win = mlx_new_window(game->mlx, \
			game->w_w * 32, game->h_w * 32, TITTLE);
	image_init(game);
	draw_map(game);
	mlx_hook(game->win, 2, 0, game_read_keys, game);
	mlx_hook(game->win, 17, 0, end_game, game);
}

int	main(int argc, char **argv)
{
	t_game	*game;

	if (argc == 2)
	{
		game = (t_game *)malloc(sizeof(t_game));
		var_init(game);
		map_start(argv, game);
		game_start(game);
		mlx_loop(game->mlx);
		mlx_destroy(game->mlx);
		free_map(game->map);
		free(game);
	}
	else
		ft_printf("Error\nNo map provied.\n");
	return (0);
}
