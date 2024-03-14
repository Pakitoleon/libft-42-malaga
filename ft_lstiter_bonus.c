/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: @fgonzal2 <fgonzal2@studen.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:32:32 by @fgonzal2         #+#    #+#             */
/*   Updated: 2024/01/08 12:44:10 by @fgonzal2        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*int main() {
	t_list node1 = {.data = malloc(sizeof(int)), .next = NULL};
	t_list node2 = {.data = malloc(sizeof(int)), .next = NULL};
	t_list node3 = {.data = malloc(sizeof(int)), .next = NULL};

	*(int *)node1.data = 10;
	*(int *)node2.data = 20;
	*(int *)node3.data = 30;

	node1.next = &node2;
	node2.next = &node3;

	ft_lstiter(&node1, print_int);

	free(node1.data);
	free(node2.data);
	free(node3.data);

	return (0);
}*/
