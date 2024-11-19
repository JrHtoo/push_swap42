/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:56:45 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/19 13:51:50 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	swap(t_list **list)
{
	t_list	*head;
	t_list	*next;
	int		temp;

	if (ft_lstsize(*list) < 2)
		return ;
	head = *list;
	next = (*list)->next;
	if (!head || !next)
		ft_error_message(list, "Error occured while swapping!");
	temp = head->content;
	head->content = next->content;
	next->content = temp;
}

void	swap_a(t_list **list)
{
	swap(list);
	ft_printf("sa\n");
}

void	swap_b(t_list **list)
{
	swap(list);
	ft_printf("sb\n");
}

void	swap_s(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
