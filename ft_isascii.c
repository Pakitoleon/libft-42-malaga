/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:40:19 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/11/29 10:45:35 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int	main(void)

{
	char	c, result;

	c = '*';
	result = ft_isascii(c);
	printf("El resultado es %o\n", result);
	c = 'A';
	result = ft_isascii(c);
	printf("El resultado es %o\n", result);
	c = ' ';
	result = ft_isascii(c);
	printf("El resultado es %o\n", result);
	return (0);
}*/