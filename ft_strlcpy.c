/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:16:28 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/03 14:19:29 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)

{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (dstsize == 0)
		return (j);
	while (src[i] != '\0' && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}

/*int	main(void)
{
	char	dst[15];

	char	src[] = "franco a muerto";
	ft_strlcpy(dst, src, 6);
	printf("%s\n", dst);
}*/
