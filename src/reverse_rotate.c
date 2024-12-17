/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:36:19 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/21 16:31:50 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	if (!(*stack) || !((*stack)->next))
		return ;
	tmp = *stack;
	end = ft_lstlast(*stack);
	while ((*stack)->next->next)
		*stack = (*stack)->next;
	end->next = tmp;
	(*stack)->next = NULL;
	*stack = end;
}

void	reverse_rotate_a(t_list **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_list **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	reverse_rotate_r(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rra\n");
}
