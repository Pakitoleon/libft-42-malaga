/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:21:45 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/07 12:31:49 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
	{
		s++;
	}
	while (s >= str)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*str;
	char		c;
	char		*result;

	str = "hello world";
	c = 'a';
	result = ft_strrchr(str, c);
	if (result != NULL)
		printf("'%c' encontrada en la posicion:  %ld'\n'", c, result - str);
	else
		printf("'%c' no encontrada: '\n'", c);
	return (0);
}*/
