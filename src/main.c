/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:06:07 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/19 13:15:12 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc == 1)
		return (0);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_parsing(stack_a, argc, argv);
	ft_parsing(stack_b, argc, argv);
	check_sorted(stack_a);
	swap_a(stack_a);
	push_b(stack_a, stack_b);
	push_b(stack_a, stack_b);
	rotate_b(stack_b);
	reverse_rotate_b(stack_b);
	t_list	*temp;
	temp = *stack_b;
	while (temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
	ft_printf("----------------------------------\n");
	t_list	*tmp;
	tmp = *stack_a;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	return (0);
}
