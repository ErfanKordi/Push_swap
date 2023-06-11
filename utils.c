/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:37:38 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/11 20:53:30 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	strslen(char **strs)
{
	int	c;

	if (!strs)
		return (0);
	c = 0;
	while (strs[c])
		c++;
	return (c);
}

int	slstsize(t_element *lst)
{
	int	c;

	c = 0;
	while (lst != NULL)
	{
		c++;
		lst = lst->next;
	}
	return (c);
}
int nearest_sq(int n)
{
	int c = 0;

	while (c * c < n)
		c++;
	return(c - 1);
}
int	find_index(t_element *lst, int id)
{
	int	c;

	c = 0;
	while (lst && lst->index != id)
	{
		c++;
		lst = lst->next;
	}
	return (c);
}
void	index3(t_element **stack_a)
{
	int	*nums;

	nums = ft_calloc(4, sizeof(int));
	nums[0] = (*stack_a)->value;
	nums[1] = (*stack_a)->next->value;
	nums[2] = (*stack_a)->next->next->value;
	sort_for_index(nums, 3);
	give_index(stack_a, nums);
	free(nums);
}
