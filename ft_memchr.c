/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:52:40 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/10 10:24:51 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		if (*str++ == (unsigned char)c)
			return (str - 1);
	return (0);
}

/*int main (void)
{
	const char *s = "analfabeta";
	char	c = 'b';
	size_t	n = 7;
	char *result;


	result = ft_memchr(s, c, n);
	if ( result != NULL)
		printf("'%c'encontrado en la posicion: %ld\n", c, result -s);
	else
		printf("'%c' no encontrado\n", c);

	return (0);
}*/
