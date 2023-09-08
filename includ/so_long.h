/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:12:57 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/08 20:26:24 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <unistd.h> // open, close, read, write
#include <stdlib.h>	// malloc, free 
#include <stdio.h>	// perror


/* Funciones */

	/* map.c */

void	read_map(int fd, t_game *game);
void	analyze_map(t_game *game);
void	map_start(char **argv, t_game *game);

	/* errors.c */

void	free_map(char **map);
void	free_enum(char **map, char *errir_msg);
void	exit_nocompilation(void);
void	map_exit(char **map, int enun_msg, char *error_msg);
#endif
