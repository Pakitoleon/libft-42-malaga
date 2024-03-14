/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:17:14 by @fgonzal2         #+#    #+#             */
/*   Updated: 2023/12/17 09:55:34 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*s2;
	char		*s1;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	s1 = malloc(len + 1);
	if (!s1)
		return (NULL);
	s2 = s1;
	while (len--)
	{
		*s2 = s[start];
		s2++;
		start++;
	}
	*s2 = '\0';
	return (s1);
}
