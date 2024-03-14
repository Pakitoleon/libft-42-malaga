/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:24:15 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/11 12:33:49 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[a] && a < len)
	{
		b = 0;
		while (haystack [a + b] == needle[b] && haystack[a + b])
		{
			b++;
			if (needle[b] == '\0' && a + b <= len)
				return ((char *)&haystack[a]);
		}
		a++;
	}
	return (0);
}

/*int main(void)
{
	char	*a;
	char	*b;
	char	*c;

	a = "the last of us";
	b = "last";
	c = ft_strnstr(a, b, strlen(a));
	if (c)
		printf("%s\n", b);
	else
		printf("sin resultado encontrado\n");
	return (0);
}*/
