/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_bactrackring.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:36:47 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/14 14:57:55 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	cont_row_col(t_game *game)
{
	int i;
	i = 0;
	while (game->map[i])
		i++;
	game->col = i;
	game->row - ft_strlen(game->map[0]);
}

void	initialize_backtraking(t_game *game)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (game->map_len[i])
	{
		j = 0;
		while (game->map_len[i][j])
		{
			if (game->map_len[i][j] == 'P')
			{
				game->m_col = i;
				game->m_row = j;
			}
			if (game->map_len[i][j] == 'E')
				game->e++;
			if (game->map_len[i][j] == 'C')
				gam->c++;
			j++;
		}
		i++;
	}
}

void	localized_backtracking(t_game *game, int i, int j)
{
	while (game->map_len[i][j] != 1 && game->map_len[i][j] != 'X')
	{
		if (game->map_len[i][j] == 'C')
			game->c--;
		else if (game->map_len[i][j] == 'E')
			game->e--;
		game->map_leni[i][j] = 'X';
		localized_backtracking(game, i + 1, j); // apartir de esta linea permite explorar el mapa en direccion hacia abajo en busca de C y E;
		localized_backtracking(game, i - 1, j); // hace lo mismo pero en direccion hacia arriba;
		localized_backtracking(game, i, j + 1); // hace lo mismo pero en direccion hacia derecha;
		localized_backtracking(game, i, j - 1); // hace lo mismo pero en direccion hacia izquierda;
	}

}
void	map_backtraking(t_game *game)
{
	cont_row_col(game);
	initialize_backtraking(game);
	localized_backtracking(game, game->m_col,game->m_row);
	if (!game->c)
		map_exit(map->len, NOT_PATH, "Error\nNo hay un camino valido, no se encontraron monedas");
	if (!game->e)
		map_exit(map->len, NOT_PATH, "Error\nNo se encontro alguna salida");
	free_map(game->map_len);
}
