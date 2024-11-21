/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:15:49 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/21 12:21:33 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_sort_b_till_5(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*temp;

	while (ft_lstsize(*stack_a) > 5 && !check_sorted(stack_a))
	{
		
	}
}

void	sort_big(t_list **stack_a, t_list **stack_b)
{
	ft_sort_b_till_5(stack_a, stack_b);
	ft_sort_a(stack_a, stack_b);
}