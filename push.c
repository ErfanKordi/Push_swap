/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:58:37 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/06 15:40:10 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_element **stack_a, t_element **stack_b)
{
	t_element	*b_first;

	if (stack_b != NULL)
	{
		b_first = *stack_b;
		*stack_b = (*stack_b)->next;
		if (*stack_a == NULL)
		{
			*stack_a = b_first;
			(*stack_a)->next = NULL;
		}
		else
		{
			b_first->next = *stack_a;
			*stack_a = b_first;
		}
		printf("pa\n");
	}
}

void	pb(t_element **stack_a, t_element **stack_b)
{
	t_element	*a_first;

	if (stack_a != NULL)
	{
		a_first = *stack_a;
		*stack_a = (*stack_a)->next;
		if (*stack_b == NULL)
		{
			*stack_b = a_first;
			(*stack_b)->next = NULL;
		}
		else
		{
			a_first->next = *stack_b;
			*stack_b = a_first;
		}
		printf("pb\n");
	}
}
