/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:54:24 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/14 16:40:10 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_free_splits(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

void	ft_free_stack(t_list **list)
{
	t_list	*tmp;
	t_list	*current;

	current = *list;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	free(list);
}

void	ft_parsing(t_list **list, int argc, char **argv)
{
	int		i;
	int		j;
	char	**splits;

	i = 1;
	while (i < argc)
	{
		j = 0;
		splits = ft_split(argv[i], ' ');
		while (splits[j])
			ft_lstadd_back(list, ft_lstnew(ft_atoi(splits[j++])));
		ft_free_splits(splits);
		i++;
	}
}
