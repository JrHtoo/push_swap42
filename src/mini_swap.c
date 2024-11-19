/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:21:40 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/19 16:46:08 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	sort_2(t_list **stack)
{
	if ((*stack)->content > (*stack)->next->content)
		swap_a(stack);
}

static void	sort_3(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, find_min(stack_a));
	if (distance == 0)
		push_b(stack_a, stack_b);
	else if (distance == 1)
		swap_a(stack_a);
	else if (distance == 2)
		reverse_rotate_a(stack_a);
	sort_2(stack_a);
	push_a(stack_a, stack_b);
}

static void	sort_4(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, find_min(stack_a));
	if (distance == 0)
		push_b(stack_a, stack_b);
	else if (distance == 1)
		swap_a(stack_a);
	else if (distance == 2)
	{
		reverse_rotate_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (distance == 3)
		reverse_rotate_a(stack_a);
	sort_3(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

static void	sort_5(t_list **stack_a, t_list **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, find_min(stack_a));
	if (distance == 0)
		push_b(stack_a, stack_b);
	else if (distance == 1)
		swap_a(stack_a);
	else if (distance == 2)
	{
		rotate_a(stack_a);
		swap_a(stack_a);
	}
	else if (distance == 3)
	{
		reverse_rotate_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (distance == 4)
		reverse_rotate_a(stack_a);
	sort_4(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
		sort_2(stack_a);
	else if (size == 3)
		sort_3(stack_a, stack_b);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
}
