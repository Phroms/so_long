/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:08:59 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/08 20:35:56 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	read_map(int fd, t_game *game)
{
	int	*line;
	int	*tmp_line;
	int	*all_line;

	line = ft_strdup("");
	all_line = ft_strdup("");
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		if (line && line[0] == '\0')
		{
			free(line);
			exit_nocompilation();
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
	// verifica si el mapa es rectangular;
	if (map_is_rect(game) == 0)
		map_exit(game->map, NOT_RECT, "EL mapa no es rectangulo"); // hacer una funcion para "map exit" en donde le enviaremos la direccion de "map", un enuncidao y un errormsj;
	// verifica si hay problemas con la cantidad de paredes del mapa;
	else if(map_view_walls(game) > 0)
		map_exit(game->map, NOT_WALLS, "El tamano del mapa es incorrecto"); // lo mismo pero para "map view walls";

	// verifica si hay caracteres duplicados o si hay alguno faltante;
	else if (view_duplicate_chars(game) == 0)
		map_exit(game->map, NOT_CHARS, "Hay caracteres duplicados y/o faltantes"); // lo mismo para "view duplicate chars";
	
	// verifica si hay caracteres invalidos;
	else if (incorret_chars_in_map(game) == 0)
		map_exit(game->map, BAD_CHARS, "Hay caracteres invalidos"); // lo mismo para "incorret chars in map";

	// verifica si hay backtraking
	map_backtraking(game); // sera otra funcion para ver si hay backtraking o no;
}

void	map_star(char **argv, t_game *game)
{
	int len;
	char *str;
	int fd;

	str = argv[1];
	len = ft_strlen(str);
	if (!(str[len - 1] == 'r' && str[len - 2] == 'e'&& str[len - 3] == 'b' \
			&& str[len - 4] == '.'))
	{
		ft_printf("Error al ejecutar el programa");
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
