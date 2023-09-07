/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:13:40 by agrimald          #+#    #+#             */
/*   Updated: 2023/05/29 16:23:35 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				j;

	j = 0;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[j] != '\0' && s2[j] != '\0' && s1[j] == s2[j] && i < n -1)
	{
		j++;
		i++;
	}
	return ((unsigned char)s1[j] - (unsigned char)s2[j]);
}
/*int main(void)
{
	char s1 [] = "12345";
	char s2 [] = "12348";
	printf("%d", ft_strncmp(s1, s2, 11));
	printf("%d", strncmp(s1, s2, 11));
}*/
