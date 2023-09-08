/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:27:36 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/07 21:54:59 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_game
{
	int 	colum; // sera la cantidad de columnas que habra en el mapa; (necesitaras un strlen)
	int 	rows;  // sera la cantidad de filas que habra en el mapa; (necesitaras un strlen)
	int		coins;
	int 	coin2; // dice navid dos coins para hacer el brackting
	int		moves;
	int		m_col; // movimientos del jugador en columnas;
	int		m_row; // moviminetos del jugrador en filas;
	int		win;
	int		exit;
}t_game;

typedef struct s_map
{
	char	**map;
	char	**map_len;
}t_map;

/*typedef struct s_jugador
{

}t_jugador;*/

#endif
