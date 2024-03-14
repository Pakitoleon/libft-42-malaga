/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:08:00 by @fgonzal2         #+#    #+#             */
/*   Updated: 2023/12/26 12:57:19 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return (str -32);
}

int	main(void)
{
	char	*result;

	char str[10] = "hello.";
	printf("The result is %s\n", str);
	result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return (0);
}*/
