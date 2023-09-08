/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_bactrackring.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:36:47 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/08 21:58:50 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	cont_row_col(t_game *game)
{
	if (game->map[0])
	{
		game->row = ft_strlen(game[0]);
		game->col = ft_strlen(game[0]);
	}
	else
	{
		game->row = 0;
		game->col = 0;
	}
}

void	map_backtraking(t_game *game)
{
	cont_row_col(game);
	// aqui faltan cositasssss;
	free_map(game);
}
