/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:55:19 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/19 18:27:24 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	var_init(t_game *game)
{
	game->h = 0;
	game->w = 0;
	game->e = 0;
	game->c = 0;
	game->coins = 0;
	game->moves = 1;
	game->h_w = 0;
	game->w_w = 0;
	game->p_col = 0;
	game->p_row = 0;
	game->col = 0;
	game->row = 0;
}
