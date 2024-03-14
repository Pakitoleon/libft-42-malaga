/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:03:33 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/10 11:53:12 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	unsigned char	*d1;
	unsigned char	*d2;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (n-- && *d1 == *d2)
	{
		if (n)
		{
			d1++;
			d2++;
		}
	}
	return ((int)(*d1 - *d2));
}

/*int	main(void)
{
	unsigned char a[] = "abejorro";
	unsigned char b[] = "abezardo";
	size_t n = 3;

	printf("%d\n", ft_memcmp(a, b, n));
	return (0);
}*/