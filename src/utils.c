/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:50:53 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/19 14:57:59 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_distance(t_list **stack, int index)
{
	t_list	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (index == head->content)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}

int	find_min(t_list **stack)
{
	int		min;
	t_list	*temp;

	temp = *stack;
	min = temp->content;
	while (temp)
	{
		if (min > temp->content)
			min = temp->content;
		temp = temp->next;
	}
	return (min);
}

int	find_max(t_list **stack)
{
	int		max;
	t_list	*temp;

	temp = *stack;
	max = temp->content;
	while (temp)
	{
		if (max < temp->content)
			max = temp->content;
		temp = temp->next;
	}
	return (max);
}
