/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:47:06 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/06 15:41:15 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_element **stack_a)
{
	if ((*stack_a)->index == 0 && (*stack_a)->next->index == 2)
	{
		r(stack_a, 1, 'a');
		sa(stack_a); //r(stack_a, 0, 'a');
	}
	else if ((*stack_a)->index == 1 && (*stack_a)->next->index == 2)
		r(stack_a, 1, 'a');
	else if ((*stack_a)->index == 1 && (*stack_a)->next->index == 0)
		sa(&(*stack_a));
	else if ((*stack_a)->index == 2 && (*stack_a)->next->index == 0)
		r(stack_a, 0, 'a');
	else if ((*stack_a)->index == 2 && (*stack_a)->next->index == 1)
	{
		r(stack_a, 0, 'a');
		sa(&(*stack_a));
	}
}
// void	sort3(t_element **s)
// {
// 	int	a;
// 	int	b;
// 	int	c;

// 	a = (*s)->value;
// 	b = (*s)->next->value;
// 	c = (*s)->next->next->value;
// 	if (a > b && b < c && a < c)
// 		sa(s);
// 	else if ((a > c && c > b) || (c > a && a > b))
// 		r(s,0,'a');
// 	else if (b > a && a > c)
// 		r(s,1,'a');
// 	sa(s);
// 	r(s, (a > b && b > c) || (c > b && b > a), 'a');
// }

void	sort5(t_element **stack_a, t_element **stack_b)
{
	int	id;
	int	pos;
	int	i;
	int	len;

	len = slstsize(*stack_a);
	id = 0;
	i = 0;
	while (i++ < len - 3)
	{
		pos = find_index(*stack_a, id);
		while ((*stack_a)->index != id)
			r(stack_a, pos > len - pos, 'a');
		pb(stack_a, stack_b);
		id++;
	}
	index3(stack_a);
	sort3(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}
void	sort_big(t_element **stack_a, t_element **stack_b)
{

	int	len;
	int	i;
	int	reference;

	len = slstsize(*stack_a);
	i = 0;
	reference = nearest_sq(len) * 1.4;
	while (*stack_a)
	{
		if ((*stack_a)->index <= reference + i)
		{
			pb(stack_a, stack_b);
			if ((*stack_b)->index <= i++)
				r(stack_b, 0, 'b');
		}
		else
			r(stack_a, 0, 'a');
	}
	// while ((*stack_b) != NULL)
	// {
	// 	//printf("index: %d\n", (*stack_b)->index);
	// 	printf("Value: %d\n", (*stack_b)->value);
	// 	*stack_b = (*stack_b)->next;
	// }
	while (len--)
	{
		i = find_index(*stack_b, len);
		while ((*stack_b)->index != len)
			r(stack_b, i > len - i, 'b');
		pa(stack_a, stack_b);
	}
}
void	sort(t_element **stack_a, t_element **stack_b)
{
	if (slstsize(*stack_a) <= 3)
		sort3(stack_a);
	else if (slstsize(*stack_a) <= 5)
		sort5(stack_a, stack_b);
	else
		sort_big(stack_a, stack_b);
}
