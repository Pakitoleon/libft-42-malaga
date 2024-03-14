/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:02:03 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/07 17:18:57 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && (char)c != s[i])
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*int	main(void)
{
	const char	*str;
	char		c;
	char		*result;

	str = "Hello, World!";
	c = 'o';
	result = ft_strchr(str, c);
	if (result != NULL)
		printf("'%c' encontrada en la posicion: %ld\n", c, result - str);
	else
		printf("'%c' no se encontro\n", c);
	return (0);
}*/