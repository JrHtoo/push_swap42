/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:54:24 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/18 15:56:17 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
		{
			if (ft_isnumber(splits[j]) == 0)
				ft_error_message(list, "The inputs should be only numbers");
			if (is_duplicate(list, ft_atoi(splits[j])) == 0)
				ft_error_message(list, "The number shan't be duplicated");
			ft_lstadd_back(list, ft_lstnew(ft_atoi(splits[j++])));
		}
		ft_free_splits(splits);
		i++;
	}
}
