/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:58:04 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/11 20:50:23 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	free_2d(char **arr)
{
	size_t	i;

	i = 0;
	if (arr)
	{
		while (arr && arr[i])
		{
			if (arr[i] != NULL)
			{
				free(arr[i]);
				arr[i] = NULL;
			}
			i++;
		}
		free(arr);
		arr = NULL;
	}
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
				ft_lstadd_front(a, ft_lstnew(ft_atoi(strs[i--])));
			else
				terminate(a, strs, 1); //i have to free strs stack a and b too.
		}
		index--;
		terminate(NULL, strs, -1);
	}
	i = 0;
}
