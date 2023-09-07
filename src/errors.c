/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:34:39 by agrimald          #+#    #+#             */
/*   Updated: 2023/09/07 20:35:14 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	exit_nocompilation(void)
{
	ft_printf("Error el mapa no compila o esta vacio");
	exit(EXIT_FAILURE);
}
