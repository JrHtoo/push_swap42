/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:10:11 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/01/29 17:38:33 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	push_back_to_a(t_list **stack_a, t_list **stack_b, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		push_a(stack_a, stack_b);
		i++;
	}
}

static void	quick_sort(t_list **stack_a, t_list **stack_b,
	t_data data, int size)
{
	if (size <= 5)
	{
		tiny_sort(stack_a, stack_b, size);
		return ;
	}
	partition(stack_a, stack_b, &data, size);
	push_back_to_a(stack_a, stack_b, data.nmoves);
	quick_sort(stack_a, stack_b, data, data.nmoves);
	quick_sort(stack_a, stack_b, data, size - data.nmoves);
}

void	main_sort(t_list **stack_a, t_list **stack_b)
{
	t_data	data;

	data.size = ft_lstsize(*stack_a);
	data.which = true;
	data.size = ft_lstsize(*stack_a);
	data.first_time = true;
	quick_sort(stack_a, stack_b, data, data.size);
	while ((*stack_b))
		push_a(stack_a, stack_b);
}
