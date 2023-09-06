/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line._bonus.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:45:13 by agrimald          #+#    #+#             */
/*   Updated: 2023/07/19 22:16:54 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>

/* PROTOTIPO DEL GET_NEXT_LINE BONUS */

char	*get_next_line(int fd);

/* FUNCIONES ADICIONALES */

size_t	ft_strlen(char *s);
size_t	ft_strlcpy(char *dest, char *src, size_t destsize);
char	*ft_strchr(char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);

/* FUNCIONES QUE UTILIZARE */

char	*read_storage(int fd, char *storage);
char	*extract_storage(char *storage);
char	*clean_storage(char *storage);
char	*free_storage(char *storage);
#endif
