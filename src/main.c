/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:06:07 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/20 16:45:19 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	t_list	*temp;

	if (argc == 1)
		return (0);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_parsing(stack_a, argc, argv);
	if (check_sorted(stack_a))
		exit(EXIT_SUCCESS);
	if (argc <= 6)
		simple_sort(stack_a, stack_b);
	temp = *stack_a;
	while (temp)
	{
		ft_printf("%d     %d\n", temp->content, temp->index);
		temp = temp->next;
	}
	ft_free_stack(stack_a);
	ft_free_stack(stack_b);
	return (0);
}
