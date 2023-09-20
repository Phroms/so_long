/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:27:36 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/20 18:12:26 by agrimald         ###   ########.fr       */
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
}t_image;

typedef struct s_game
{
	void	*bg;
	void	*mlx;
	void	*win;
	t_image	*img;
	char	**map;
	char	**map_len;
	int		h;
	int		w;
	int		e;
	int		c;
	int		coins;
	int		moves;
	int		h_w;
	int		w_w;
	int		p_col;
	int		p_row;
	int		col;
	int		row;
} t_game;

#endif
