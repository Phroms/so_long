/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_loader.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:28:09 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/27 17:54:19 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	image_data(t_game *game)
{
	game->img[0].data = (int *)mlx_get_data_addr(game->img[0].img_ptr,
			&game->img[0].bpp, &game->img[0].size_l, &game->img[0].endian);
	game->img[1].data = (int *)mlx_get_data_addr(game->img[1].img_ptr,
			&game->img[1].bpp, &game->img[1].size_l, &game->img[1].endian);
	game->img[2].data = (int *)mlx_get_data_addr(game->img[2].img_ptr,
			&game->img[2].bpp, &game->img[2].size_l, &game->img[2].endian);
	game->img[3].data = (int *)mlx_get_data_addr(game->img[3].img_ptr,
			&game->img[3].bpp, &game->img[3].size_l, &game->img[3].endian);
	game->img[4].data = (int *)mlx_get_data_addr(game->img[4].img_ptr,
			&game->img[4].bpp, &game->img[4].size_l, &game->img[4].endian);
}

void	image_init(t_game *game)
{
	game->h = 32;
	game->w = 32;
	game->img = malloc(sizeof(t_image) * (7 + 1));
	game->img[0].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/wall.xpm", &game->w, &game->h);
	game->img[1].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/coin.xpm", &game->w, &game->h);
	game->img[2].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/path.xpm", &game->w, &game->h);
	game->img[3].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/door.xpm", &game->w, &game->h);
	game->img[4].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/player.xpm", &game->w, &game->h);
	image_data(game);
}
