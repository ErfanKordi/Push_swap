/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:22:18 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/01 21:05:40 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sort_for_index(int *nums, int count)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	j = 0;
	while (i < count - 1)
	{
		while (j < count - i - 1)
		{
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (nums);
}
void	give_index(t_element **list, int *nums)
{
	int			c;
	int			i;
	t_element	*temp;

	c = 0;
	i = 0;
	temp = *list;
	while (temp)
	{
		if (temp->value == nums[i])
		{
			temp->index = i;
			i = 0;
			temp = temp->next;
		}
		else
			i++;
	}
}

void	list_to_int(t_element **list, int **nums)
{
	int			count;
	t_element	*current;

	count = 0;
	current = *list;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	*nums = ft_calloc(count + 1, sizeof(int));
	current = *list;
	for (int i = 0; i < count; i++)
	{
		(*nums)[i] = current->value;
		current = current->next;
	}
	sort_for_index(*nums, count);
	give_index(list, *nums);
}
