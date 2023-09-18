/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_backtracking.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 21:48:30 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/18 19:18:41 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	cont_row_col(t_game *game)
{
	int i;
	i = 0;
	while (game->map[i])
		i++;
	game->rows = i;
	game->colum = ft_strlen(game->map[0]);
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
			if (game->map_len[i][j] == 'C')
				game->c++;
			if (game->map_len[i][j] == 'E')
				game->e++;
			j++;
		}
		i++;
		j = 0;
	}
}

void	localized_backtracking(t_game *game, int i, int j)
{
	while (game->map_len[i][j] != '1' && game->map_len[i][j] != 'X')
	{
		if (game->map_len[i][j] == 'C')
			game->c--;
		else if (game->map_len[i][j] == 'E')
			game->e--;
		game->map_len[i][j] = 'X';
		localized_backtracking(game, i + 1, j);
		localized_backtracking(game, i - 1, j);
		localized_backtracking(game, i, j + 1);
		localized_backtracking(game, i, j - 1);
	}

}
void	map_backtraking(t_game *game)
{
	cont_row_col(game);
	initialize_backtraking(game);
	localized_backtracking(game, game->m_col,game->m_row);
	if (game->c != 0)
		map_exit(game->map_len, NOT_PATH, "Error\nNo hay un camino valido, no se encontraron monedas");
	if (game->e != 0)
		map_exit(game->map_len, NOT_PATH, "Error\nNo se encontro alguna salida");
	free_map(game->map_len);
}
