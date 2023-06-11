/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:30:16 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/11 20:40:15 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_element **stack, char a_or_b)
{
	t_element	*last;

	last = *stack;
	while (last->next)
		last = last->next;
	last->next = *stack;
	*stack = (*stack)->next;
	last->next->next = NULL;
	if (a_or_b == 'a')
		write(1, "ra\n", 3);
	else if (a_or_b == 'b')
		write(1, "rb\n", 3);
}

void	rotaterev(t_element **stack, char a_or_b)
{
	t_element	*last;
	t_element	*prev;

	last = *stack;
	prev = NULL;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
	if (a_or_b == 'a')
		write(1, "rra\n", 3);
	else if (a_or_b == 'b')
		write(1, "rrb\n", 3);
}
void	r(t_element **stack, int rev, char a_or_b)
{
	if (rev)
		rotaterev(stack, a_or_b);
	else
		rotate(stack, a_or_b);
}
void	rr(t_element **stack_a, t_element **stack_b)
{
	r(stack_a, 0, 'a');
	r(stack_b, 0, 'b');
}
void	rrr(t_element **stack_a, t_element **stack_b)
{
	r(stack_a, 1, 'a');
	r(stack_b, 1, 'b');
}
