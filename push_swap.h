/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:34:05 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/11 19:24:49 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

void	parse(t_element **a, char **argv, int argc);
void	sa(t_element **stack_a);
void	sb(t_element **stack_b);
void	ss(t_element **stack_a, t_element **stack_b);
void	pa(t_element **stack_a, t_element **stack_b);
void	pb(t_element **stack_a, t_element **stack_b);
void	r(t_element **stack, int rev, char a_or_b);
void	rr(t_element **stack_a, t_element **stack_b);
void	rrr(t_element **stack_a, t_element **stack_b);
void	terminate(t_element **a, char **s, int error);
int		is_dup(t_element *a, char *s);
int		is_int(char *n);
void	list_to_int(t_element **list, int **nums);
int		strslen(char **strs);
int		slstsize(t_element *lst);
void	sort_linked_list(t_element **list);
int		nearest_sq(int n);
int		find_index(t_element *lst, int id);
void	sort(t_element **stack_a, t_element **stack_b);
void	sort_big(t_element **stack_a, t_element **stack_b);
void	give_index(t_element **list, int *nums);
int		*sort_for_index(int *nums, int count);
void	index3(t_element **stack_a);

#endif
