/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:36:43 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/21 16:48:44 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	push(t_list **stack_from, t_list **stack_to)
{
	t_list	*push;

	if (!*stack_from)
		return ;
	push = (*stack_from)->next;
	(*stack_from)->next = *stack_to;
	*stack_to = *stack_from;
	*stack_from = push;
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
