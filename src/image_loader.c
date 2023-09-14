/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_loader.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:28:09 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/14 14:06:20 by agrimald         ###   ########.fr       */
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
	game->img[5].data = (int *)mlx_get_data_addr(game->img[5].img_ptr,
			&game->img[5].bpp, &game->img[5].size_l, &game->img[5].endian);
	game->img[6].data = (int *)mlx_get_data_addr(game->img[6].img_ptr,
			&game->img[6].bpp, &game->img[6].size_l, &game->img[6].endian);
}

void	image_init(t_game *game)
{
	game->al = 32;
	game->an = 32;
	game->img = malloc(sizeof(t_image) * (7 + 1));
	game->img[0].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/pared.xpm", &game->an, &game->al);
	game->img[1].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/moneda.xpm", &game->an, &game->al);
	game->img[2].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/camino.xpm", &game->an, &game->al);
	game->img[3].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/puerta.xpm", &game->an, &game->al);
	game->img[4].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/jugador.xpm", &game->an, &game->al);
	game->img[5].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/jugador_izquierda.xmp", &game->an, &game->al);
	game->img[6].img_ptr = mlx_xpm_file_to_image(game->mlx,
			"assets/puera_abierta.xpm", &game->an, &ga,e->al);
	image_data(game);
}
