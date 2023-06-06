/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:33:55 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/05 13:43:01 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	error(t_element *a, char **s, int error)
{
	if (a)
		free(a);
	if (s)
		free(s);
	if (error == 1)
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		exit(1);
	}
	exit(0);
}
int	is_sorted(t_element *stack_a)
{
	const t_element	*current;

	current = stack_a;
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}
int	main(int argc, char **argv)
{
	t_element	*stack_a;
	t_element	*stack_b;
	int			*nums;
	int			c;

	c = 0;
	stack_b = NULL;
	stack_a = NULL;
	if (argc < 2)
		error(NULL, NULL, 0);
	parse(&stack_a, argv, argc);
	if (is_sorted(stack_a))
		error(NULL, NULL, 0);
	list_to_int(&stack_a, &nums);
	sort(&stack_a, &stack_b);
	//while (stack_a != NULL)
	//{
	//	printf("Value: %d\n", stack_a->value);
	//	stack_a = stack_a->next;
	//}
	free(nums);
	return (0);
}
