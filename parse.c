/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:58:04 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/05 13:08:22 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_new_element(char *a, t_element **stack_a)
{
	int			num;
	t_element	*new;

	num = ft_atoi(a);
	new = (t_element *)ft_calloc(sizeof(t_element), 1);
	new->value = num;
	new->next = *stack_a;
	*stack_a = new;
}

void	parse(t_element **a, char **argv, int argc)
{
	int		index;
	char	**strs;
	int		i;
	int		c;

	c = 0;
	index = argc - 1;
	while (index > 0)
	{
		strs = ft_split(argv[index], ' ');
		i = strslen(strs) - 1;
		while (i >= 0)
		{
			if (is_int(strs[i]) && !is_dup(*a, strs[i]))
				make_new_element(strs[i--], a);
			else
				error(*a, strs, 1); //i have to free strs stack a and b too.
		}
		free(strs);
		index--;
	}
}
