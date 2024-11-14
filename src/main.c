/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:06:07 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/14 16:39:53 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	// t_list	*stack_b;

	stack_a = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	if (argc == 1)
		return (0);
	ft_parsing(stack_a, argc, argv);
	t_list	*temp;
	temp = *stack_a;
	while (temp)
	{
		printf("%d\n", temp->content);
		temp = temp->next;
	}
	ft_free_stack(stack_a);
	return (0);
}
