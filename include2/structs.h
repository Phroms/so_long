/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:27:36 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/06 19:46:38 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_map
{
	int 	colum; // sera la cantidad de columnas que habra en el mapa; (necesitaras un strlen)
	int 	files; // sera la cantidad de filas que habra en el mapa; (necesitaras un strlen)
	int		coins;
	int		moves;
	int		m_col; // movimientos del jugador en columnas;
	int		m_fil; // moviminetos del jugrador en filas;
	int		win;
	int		exit;
	char	**map;
}t_map;

/*typedef struct s_jugador
{

}t_jugador;*/

#endif
