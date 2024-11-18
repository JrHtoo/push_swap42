/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:50:53 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/18 15:56:30 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_sorted(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	while (temp->next)
	{
		if (temp->content > temp->next->content)
			return ;
		temp = temp->next;
	}
	exit(EXIT_SUCCESS);
}

int	ft_isnumber(char *numb)
{
	int	i;

	i = 0;
	while (numb[i])
	{
		if (ft_isdigit(numb[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicate(t_list **list, int numb)
{
	t_list	*temp;

	temp = *list;
	while (temp)
	{
		if (temp->content == numb)
			return (0);
		temp = temp->next;
	}
	return (1);
}
