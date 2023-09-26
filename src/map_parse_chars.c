/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parse_chars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:31:12 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/26 17:52:04 by agrimald         ###   ########.fr       */
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

int	map_parse_incorrect_chars(t_game *game)
{
	int		i;
	int		j;
	char	*valid_chars;

	i = 0;
	valid_chars = "10CEP";
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (ft_strchr(valid_chars, game->map[i][j]) == NULL)
				return (0);
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
