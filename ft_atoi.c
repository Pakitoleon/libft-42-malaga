/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:56:31 by fgonzal2          #+#    #+#             */
/*   Updated: 2023/12/13 13:36:59 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long			res;
	long			sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] >= 48 && str[i] <= 57) && str[i] != '\0')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return ((int)(res * sign));
}

/*int main() 
{
	const char *str = "-123";
	int num = ft_atoi(str);
	printf("The integer is %d\n", num);
	return 0;
}*/