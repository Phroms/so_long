/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:34:39 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/20 21:22:05 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	end_game(t_game *game)
{
	map_exit(game->map, FINISH, "Game Over\n");
	mlx_destroy_image(game->mlx, game->img);
	mlx_destroy_window(game->mlx, game->win);
	mlx_destroy(game->mlx);
	free(game);
	exit (0);
}

void	free_map(char **map)
{
	int	i;

	i = -1;
	while (map[++i])
		free(map[i]);
	free(map);
	map = NULL;
}

void	free_enun(char **map, char *error_msg)
{
	free_map(map);
	ft_printf(error_msg);
	exit (EXIT_FAILURE);
}

void	exit_no_compilation(void)
{
	ft_printf("Error el mapa no compila o esta vacio");
	exit(EXIT_FAILURE);
}

void	map_exit(char **map, int enun_msg, char	*error_msg)
{
	if (enun_msg == NOT_BER)
	{
		ft_printf("\n No hay un archivo ber");
		exit(EXIT_FAILURE);
	}
	if (enun_msg == NOT_RECT)
		free_enun(map, error_msg);
	if (enun_msg == NOT_WALLS)
		free_enun(map, error_msg);
	if (enun_msg == NOT_CHARS)
		free_enun(map, error_msg);
	if (enun_msg == NOT_PATH)
		free_enun(map, error_msg);
	if (enun_msg == FINISH)
		free_enun(map, error_msg);
}
