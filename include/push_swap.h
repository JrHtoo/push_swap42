/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:27:05 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/18 16:41:59 by juhtoo-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../lib/libft/libft.h"
# include "../lib/ft_printf/ft_printf.h"

void	ft_parsing(t_list **list, int argc, char **argv);

void	ft_free_stack(t_list **list);
void	ft_free_splits(char **split);
void	ft_error_message(t_list **list, char *str);
void	check_sorted(t_list **stack);
int		is_duplicate(t_list **list, int numb);
int		ft_isnumber(char *numb);

// swap instruction
void	swap_s(t_list **stack_a, t_list **stack_b);
void	swap_b(t_list **list);
void	swap_a(t_list **list);

// push instruction
void	push_b(t_list **stack_a, t_list **stack_b);
void	push_a(t_list **stack_a, t_list **stack_b);

#endif