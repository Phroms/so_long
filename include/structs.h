/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:27:36 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/13 19:36:31 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_image
{
	void	*img_ptr;
	int		*data;
	int		size_l;
	int		bpp;
	int		endian;
}t_image

typedef struct s_map
{
	char	**map;
	char	**map_len;
}
typedef struct s_game
{
	void	*mlx;
	void	*win;
	t_image	*img;
	t_map	*juego;
	int 	colum; // sera la cantidad de columnas que habra en el mapa; (necesitaras un strlen)
	int 	rows;  // sera la cantidad de filas que habra en el mapa; (necesitaras un strlen)
	int		coins;
	int 	c; // dice navid dos coins para hacer el brackting
	int		e; // otro exit para el backtraing
	int		moves;
	int		al_col; // es el valor X de la altura que tendra 
	int		ho_row; // es el valor X horizontal que tendra
	int		m_col; // movimientos del jugador en columnas;
	int		m_row; // moviminetos del jugrador en filas;
	int		win;
	int		exit;
}t_game;

#endif
