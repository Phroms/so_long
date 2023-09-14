# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 20:11:34 by agrimald          #+#    #+#              #
#    Updated: 2023/09/13 21:47:26 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CFLAGS = -Wall -Werror -Wextra -g
SRCDIR = src
OBJDIR = obj
HEADERS = include/so_long.h
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))
MLX = include/mlx/libmlx.a

SRC = src/game_input.c src/image_loader.c src/var_init.c src/draw_map.c \
	  src/errors.c src/map.c src/map_backtracking.c src/map_parse_chars.c \
	  src/map_parse_rect.c src/player_movement_check.c src/player_movements.c \
	  src/so_long.c
all:
		@$(MAKE) -sC include/libft
		@$(MAKE) -sC include/mlx
		@$(MKAE) $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
		@printf "compiling objects"
		@mkdir -p $(@D)
		@gcc $(CFLAGS) -c $< -o $@ - INCLUDE/libft

$(NAME): $(OBJECTS) $(HEADERS) Makefile $(LIBFT) $(MLX)
		@mkdir -p $(@D)
		@gcc $(CFLAGS) -o $(NAME) $(OBJECTS) -Iinclude/libft -Linclude/libft -lft \
		-Iinclude/mlx -Linclude/mlx -lmlx -framework OpenGL -frameword Appkit
		@printf "\nCompiled successfully!/n"

fclean: clean
		@rm -rf $(NAME)
		@$(MAKE) -C include/libft fclean
		@$(MAKE) -C include/mlx clean
		@printf "removed so_long objects\n"

clean:
		@rm -rf $(OBJDIR)
		@$(MAKE) -C include/libft clean
		@printf "removed so_long and libft object!\n"

re: fclean all

.PHONY: all clean fclean re
