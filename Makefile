# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 20:11:34 by agrimald          #+#    #+#              #
#    Updated: 2023/09/21 16:14:51 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CFLAGS = -Wall -Werror -Wextra -g#-fsanitize=address

LIBFT = include/libft/libft.a
SRCDIR = src
OBJDIR = obj
HEADERS = include/so_long.h include/errors.h include/move.h include/structs.h
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))
MLX = include/mlx/libmlx.a

SRC = src/game_input.c src/image_loader.c src/var_init.c src/draw_map.c \
      src/errors.c src/map.c src/map_backtracking.c src/map_parse_chars.c \
      src/map_parse_rect.c src/player_movement_check.c src/player_movements.c \
	  src/so_long.c

OLD_MAKE = /usr/bin/make3.81 #make

all:
		@$(MAKE) -sC include/libft
		@$(OLD_MAKE) -sC include/mlx
		@$(MAKE) $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
		@printf "Compiling objects\n"
		@mkdir -p $(@D)
		@gcc $(CFLAGS) -c $< -o $@ -Iinclude/libft -Iinclude/mlx

$(NAME): $(OBJECTS) $(HEADERS) Makefile $(LIBFT) $(MLX)
		@mkdir -p $(@D)
		@gcc $(CFLAGS) -o ${NAME} ${OBJECTS} -Iinclude/libft/include -Linclude/libft -lft \
		-Iinclude/mlx -Linclude/mlx -lmlx -framework OpenGL -framework AppKit
		@printf "\nCompiled successfully!\n"

fclean: clean
		@rm -rf $(NAME)
		@$(MAKE) -C include/libft fclean
		@$(MAKE) -C include/mlx clean
		@printf "removed so_long objects\n"

clean:
		@rm -rf $(OBJDIR)
		@$(MAKE) -C include/libft clean
		@$(MAKE) -C include/mlx clean
		@printf "removed so_long and libft object!\n"

re: fclean all

.PHONY: all clean fclean re
