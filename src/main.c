/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:06:07 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/19 19:41:14 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	// t_list	*temp;

	if (argc == 1)
		return (0);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_parsing(stack_a, argc, argv);
	check_sorted(stack_a);
	if (argc <= 6)
		simple_sort(stack_a, stack_b);
	// temp = *stack_a;
	// while (temp)
	// {
	// 	ft_printf("%d\n", temp->content);
	// 	temp = temp->next;
	// }
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	return (0);
}
