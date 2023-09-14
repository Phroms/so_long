/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:27:36 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/14 14:06:26 by agrimald         ###   ########.fr       */
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

typedef struct s_game
{
	void	*bg;
	void	*mlx;
	void	*win;
	t_image	*img;
	char	**map;
	char	**map_len;
	int		al; // sera la altura que definamos;
	int		an; // sera lo ancho que definamos;
	int		e; // exit para el backtracking
	int		c; // segundo coin para hacer el backtracking
	int		coins;
	int		moves;
	int		al_col; // es el valor X de la altura que tendra;
	int		ho_row; // es el valor X horizontal que tendra;
	int		m_col; // movimientos del jugador en columnas;
	int		m_row; // movimientos del jugador en filas;
	int		colum; // sera la cantidad de columnas que habra en el mapa; (necesitaras un strlen)
	int		rows; //sera la cantidad de filas que habra en el mapa; (necesitaras un strlen)
}t_game;

#endif
