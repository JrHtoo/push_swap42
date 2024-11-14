/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:27:05 by juhtoo-h          #+#    #+#             */
/*   Updated: 2024/11/14 16:19:55 by juhtoo-h         ###   ########.fr       */
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

#endif