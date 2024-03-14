/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:04:37 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/11/28 12:44:17 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	result = ft_isalpha(c);
	printf("El resultado es %d\n", result);
	c = 'g';
	result = ft_isalpha(c);
	printf("El resultado es %d\n", result);
	c = '+';
	result = ft_isalpha(c);
	printf("El resultado es %d\n", result);
	return (0);
}*/