/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:46:53 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/02 10:25:17 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	c, result;

	c = 'a';
	result = ft_isalnum(c);
	printf("El resultado es %d\n", result);
	c = '1';
	result = ft_isalnum(c);
	printf("El resultado es %d\n", result);
	c = '*';
	result = ft_isalnum(c);
	printf("El resultado es %d\n", result);
	c = '+';
	result = ft_isalnum(c);
	printf("El resultado es %d\n", result);
	return (0);
}*/