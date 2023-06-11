/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:20:13 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/11 20:52:49 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_element **stack_a)
{
	t_element	*first;
	t_element	*second;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		first = *stack_a;
		second = (*stack_a)->next;
		first->next = second->next;
		second->next = first;
		*stack_a = second;
		write(1, "sa\n", 3);
	}
}
void	sb(t_element **stack_b)
{
	t_element	*first;
	t_element	*second;

	if (stack_b != NULL && (*stack_b)->next != NULL)
	{
		first = *stack_b;
		second = (*stack_b)->next;
		first->next = second->next;
		second->next = first;
		*stack_b = second;
		write(1, "sb\n", 3);
	}
}
void	ss(t_element **stack_a, t_element **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
