# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 19:07:28 by agrimald          #+#    #+#              #
#    Updated: 2023/07/25 19:12:44 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre del programa
NAME = libft.a
ARC = ar rcs

SRCS = ft_isalnum.c ft_isdigit.c ft_strlcat.c ft_strncmp.c ft_tolower.c \
			ft_isalpha.c ft_isprint.c ft_strlcpy.c ft_strnstr.c ft_toupper.c \
			ft_isascii.c ft_strchr.c ft_strlen.c ft_strrchr.c ft_bzero.c \
			ft_strdup.c ft_memset.c ft_memcpy.c	ft_memchr.c ft_memcmp.c \
			ft_atoi.c ft_calloc.c ft_memmove.c ft_substr.c ft_strmapi.c \
			ft_strjoin.c ft_strtrim.c ft_striteri.c ft_putchar_fd.c \
			ft_itoa.c ft_split.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			 ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			 ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

#Encabezado
HEADER = libft.h

#Flags de compilacion
CCFLAGS = -Wall -Wextra -Werror

#Reglas de compilacion
%.o: %.c $(HEADER)
	cc $(CCFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(ARC) $(NAME) $(OBJS)

#Limpieza
clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

#Hace un re-make (como si se hubiera ejecutado Make por primera vez)
re: fclean all

bonus: $(OBJS_BONUS) $(OBJS) $(HEADER)
	@$(ARC) $(NAME) $(OBJS_BONUS) $(OBJS)
	@ranlib $(NAME)
#	@echo "make: Nothing to be done for 'bonus'."

#Le dice al make que estos nombre no son archivos
.PHONY: all clean fclean re 
