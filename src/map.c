/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:08:59 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/20 21:24:57 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	read_map(int fd, t_game *game)
{
	char	*line;
	char	*tmp_line;
	char	*all_line;

	line = ft_strdup("");
	all_line = ft_strdup("");
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		if (line && line[0] == '\n')
		{
			free(line);
			exit_no_compilation();
		}
		tmp_line = all_line;
		all_line = ft_strjoin(tmp_line, line);
		free(tmp_line);
	}
	if (ft_strcmp(all_line, "") == 0)
		exit_no_compilation();
	game->map = ft_split(all_line, '\n');
	game->map_len = ft_split(all_line, '\n');
	free(all_line);
}

void	analyze_map(t_game *game)
{
	if (map_parse_rect(game) == 0)
		map_exit(game->map, NOT_RECT, "Error\nEL mapa no es rectangulo\n");
	else if (map_parse_walls(game) > 0)
		map_exit(game->map, NOT_WALLS, \
				"Error\nEl tamano del mapa es incorrecto\n");
	else if (map_parse_char(game) == 0)
		map_exit(game->map, NOT_CHARS, \
				"Error\nHay caracteres duplicados y/o faltantes\n");
	else if (map_parse_incorrect_chars(game) == 0)
		map_exit(game->map, BAD_CHARS, "Error\nHay caracteres invalidos\n");
	map_backtraking(game);
}

void	map_start(char **argv, t_game *game)
{
	int		len;
	char	*str;
	int		fd;

	str = argv[1];
	len = ft_strlen(str);
	if (!(str[len - 1] == 'r' && str[len - 2] == 'e' && str[len - 3] == 'b'
			&& str[len - 4] == '.'))
	{
		ft_printf("Error\nError al ejecutar el programa\n");
		exit(1);
	}
	fd = open(argv[1], O_RDONLY);
	if (!fd)
		exit (1);
	ft_printf("ACTUALIZACION: ARCHIVO ABIERTO CON EXITO EN EL FD %d\n", fd);
	read_map(fd, game);
	analyze_map(game);
	ft_printf("ACTUALIZACION:MAPA ANALIZADO CORRECTAMENTE\n");
	close(fd);
}
