/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:26:02 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/02 12:46:41 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	unsigned char			*d;
	unsigned const char		*s;
	size_t					i;

	d = dst;
	s = src;
	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		*d++ = *s++;
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	src[11] = "mundo";
	char	dst[];

	strcpy(dst, "hello");
	printf("before ft_memcpy dst = %s\n", dst);
	ft_memcpy(dst, src, strlen(src) + 1);
	printf("after ft_memcpy dst = %s\n", dst);
	return (0);
}*/
