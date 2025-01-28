/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   partition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:40:59 by juhtoo-h          #+#    #+#             */
/*   Updated: 2025/01/28 16:54:17 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// static void	get_pivot_position(t_list **stack_a, t_data *data)
// {
// 	t_list	*temp;

// 	temp = *stack_a;
// 	while (temp)
// 	{
// 		if (temp->content == data->pivot)
// 		{
// 			data->pivot_position = temp->current_pos;
// 			break ;
// 		}
// 		temp = temp->next;
// 	}
// }

// static void	push_pivot(t_list **stack_a, t_list **stack_b, t_data *data)
// {
// 	int	i;

// 	i = data->size;
// 	get_pivot_position(stack_a, data);
// 	if (data->pivot_position < ft_lstsize(*stack_a) / 2)
// 	{
// 		while ((*stack_a)->content != data->pivot)
// 		{
// 			rotate_a(stack_a);
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		while ((*stack_a)->content != data->pivot)
// 		{
// 			i--;
// 			reverse_rotate_a(stack_a);
// 		}
// 	}
// 	push_b(stack_a, stack_b);
// 	while (i-- > 0)
// 		reverse_rotate_a(stack_a);
// }

static int	select_pivot(t_list **stack_a, int size)
{
	int		i;
	int		sum;
	t_list	*tmp;

	i = 0;
	sum = 1;
	tmp = (*stack_a);
	while (i < size && tmp)
	{
		sum += tmp->index;
		tmp = tmp->next;
		i++;
	}
	tmp = (*stack_a);
	while (tmp->next && tmp->index != (sum / i))
		tmp = tmp->next;
	return (tmp->content);
}

static void	partition_a(t_list **stack_a, t_list **stack_b,
	t_data *data, int size)
{
	int		i;

	i = 0;
	while (i++ < size && (*stack_a))
	{
		if ((*stack_a)->content <= data->pivot)
		{
			push_b(stack_a, stack_b);
			data->nmoves++;
			if ((*stack_b)->content == data->pivot)
				rotate_b(stack_b);
		}
		else
		{
			rotate_a(stack_a);
			data->size++;
		}
	}
	i = data->size;
	while (i--)
		reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
}

void	partition(t_list **stack_a, t_list **stack_b, t_data *data, int size)
{
	data->pivot = select_pivot(stack_a, size);
	data->size = 0;
	data->nmoves = 0;
	if (data->which && (*stack_a))
		partition_a(stack_a, stack_b, data, size);
}
