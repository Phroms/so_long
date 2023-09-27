/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parse_chars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:31:12 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/27 17:46:06 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	map_parse_chars(t_game *game, char p)
{
	int	i;
	int	flags;

	i = 0;
	flags = 0;
	while (game->map[i])
	{
		if (ft_strchr(game->map[i], p))
			flags++;
		i++;
	}
	if (p == 'E' || p == 'P')
	{
		if (flags == 0 || flags > 1)
			return (0);
	}
	else if (p == 'C')
	{
		if (flags == 0)
			return (0);
	}
	return (1);
}

int	valid_char(int c)
{
	if (c == 'C' || c == 'E' || c == 'P' || c == '1' || c == '0')
		return (1);
	else
		return (0);
}

int	map_parse_incorrect_chars(t_game *game)
{
	int		i;
	int		j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (!valid_char(game->map[i][j]))
				map_exit(game->map, NOT_CHARS, "Error\ninvalid chars\n");
			j++;
		}
		i++;
	}
	return (1);
}

int	map_parse_char(t_game *game)
{
	int	i;

	i = 0;
	i = map_parse_chars(game, 'C');
	if (i == 0)
		return (0);
	i = map_parse_chars(game, 'P');
	if (i == 0)
		return (0);
	i = map_parse_chars(game, 'E');
	if (i == 0)
		return (0);
	return (1);
}
