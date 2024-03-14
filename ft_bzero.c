/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:02:20 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/04 16:18:31 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*strn;

	strn = (unsigned char *)s;
	while (n--)
		*strn++ = '\0';
}

/*
int	main(void) 
{
  const char a[] = "hola";
  ft_bzero(a,2);
}
  //a = /0/0la/0
*/
