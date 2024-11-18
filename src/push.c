/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:36:43 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/18 16:41:45 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_list **stack_from, t_list **stack_to)
{
	t_list	*head_from;
	t_list	*tmp;

	if (ft_lstsize(*stack_from) == 0)
		return ;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from->next;
	tmp->next = NULL;
	ft_lstadd_front(stack_to, tmp);
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
