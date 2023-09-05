# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 20:11:34 by agrimald          #+#    #+#              #
#    Updated: 2023/09/05 17:55:10 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: so_long

CFLAGS: -Wall -Werror -Wextra -g -MMD

SRCDIR: src
INCLUDIR: includ


all: re clean fclean re

.PHONY: clean all fclean
