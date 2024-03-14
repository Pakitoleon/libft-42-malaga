/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:50:23 by @fgonzal2         #+#    #+#             */
/*   Updated: 2023/12/11 14:12:03 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list		*new_node;

	new_node = (t_list *)malloc (sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int main() 
{	
	int *data = (int *)malloc(sizeof(int));
	*data = 42;

	t_list *new_node = ft_lstnew(data);

	free(data);

	free(new_node);

	return (0);
}*/
