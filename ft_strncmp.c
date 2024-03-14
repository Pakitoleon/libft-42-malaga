/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgonzal2 <fgonzal2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:19:47 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/07 16:57:32 by fgonzal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*int	main(void)
{
	const char *s1 = "";
	const char *s2 = "1";
	size_t n = 1;

	int result = ft_strncmp(s1, s2, n);

	if (result < 0)
		printf("s1 < s2\n");
	else if (result > 0)
		printf("s1 > s2\n");
	else
		printf("s1 = s2\n");

	return (0);
}*/
