# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 20:11:34 by agrimald          #+#    #+#              #
#    Updated: 2023/09/08 21:56:54 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: so_long

CFLAGS: -Wall -Werror -Wextra -g -MMD

SRCDIR: src
INCLUDIR: includ


all: re clean fclean re

.PHONY: clean all fclean
