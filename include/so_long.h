/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:12:57 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/15 22:17:40 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <libft.h>
# include <mlx.h>
# include <fcntl.h>
# include "errors.h"
# include "move.h"
# include "structs.h"

/* Funciones */

	/* var init */

void	var_init(t_game *game);

	/* image loader */

void	image_data(t_game *game);
void	image_init(t_game *game);

	/* so long */

void	game_start(t_game *game);
int		main(int argc, char **argv);

	/* game input */

int 	game_read_keys(int key_pressed, t_game *game, int new_row, int new_col);

	/* player movements	*/

void	player_movements(t_game *game, int row_offset, int col_offset);
void	move_player_to_coordinates(t_game *game, int new_row, int new_col);

	/* player movement check */

int 	valid_movements(t_game *game, int colum, int rows);
void	taking_coins(t_game *game, int colum, int rows);
int		handle_exit_key(int key_pressed, t_game *game);
void	game_finish(t_game *game, int rows, int colum);

	/* draw map */

void	draw_walls_and_path(t_game *game);
void	draw_entities(t_game *game);
void	draw_finish(t_game *game);
void	draw_map(t_game *game);

	/* map_backtraking */

void	cont_row_col(t_game *game);
void	initialize_bactraking(t_game *game);
void	localized_bactraking(t_game *game, int i, int j);
void	map_backtraking(t_game *game);

	/* map_parse_chars */

int 	map_parse_chars(t_game *game, char p);
int		map_parse_incorrect_chars(t_game *game);
int		map_parse_char(t_game *game);

	/* map parse rect */

int 	map_parse_rect(t_game *game);
int		map_parse_walls_rows(t_game *game);
int		map_parse_walls_colum(t_game *game);
int		map_parse_walls(t_game *game);

	/* map.c */

void	read_map(int fd, t_game *game);
void	analyze_map(t_game *game);
void	map_start(char **argv, t_game *game);

	/* errors.c */

int		end_game(t_game *game);
void	free_map(char **map);
void	free_enum(char **map, char *errir_msg);
void	exit_no_compilation(void);
void	map_exit(char **map, int enun_msg, char *error_msg);

#endif
