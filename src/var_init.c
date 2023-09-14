/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:55:19 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/14 14:59:01 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/solong.h"

void	var_init(t_game *game)
{
	game->al = 0;
	game->an = 0;
	game->e = 0;
	game->c = 0;
	game->coins = 0;
	game->moves = 1;
	game->al_col = 0;
	game->ho_row = 0;
	game->m_col = 0;
	game->m_row = 0;
	game->colum = 0;
	game->rows = 0;
}
