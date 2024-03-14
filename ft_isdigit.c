/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:46:37 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/11/28 14:46:16 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	c, result;

	c = '*';
	result = ft_isdigit(c);
	printf("el resultado es %d\n, result");
	c = '1';
	result = ft_isdigit(c);
	printf("el resultado es %d\n, result");
	c = '+';
	result = ft_isdigit(c);
	printf("el resultado es %d\n, result");
	return (0);
}*/