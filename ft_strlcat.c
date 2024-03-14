/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:57:48 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/05 11:59:29 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	i = dst_len;
	while (src[i - dst_len] && i < size - 1)
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

/*int	main(void)
{
	char	dst[20] = "hola";
	char	src[20] = "adios";
	size_t	size = 10;

	printf("%zu\n", ft_strlcat(dst, src, size));
	printf("%s\n", dst);
	printf("%s\n", src);
	return (0);
}*/