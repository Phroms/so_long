/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:08:59 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/07 17:35:10 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	read_map(int fd, t_game *d)
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
		}
		tmp_line = all_line;
	}
}
