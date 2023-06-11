/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:33:55 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/11 20:36:29 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	terminate(t_element **a, char **s, int error)
{
	int	i;

	i = 0;
	if (a)
		ft_lstclear(a);
	if (s)
	{
		while (s && s[i])
			free(s[i++]);
		free(s);
	}
	if (error == 1)
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		exit(1);
	}
	else if (error == 0)
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
void leak_check()
{
	system("leaks push_swap");
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
		terminate(NULL, NULL, 0);
	parse(&stack_a, argv, argc);
	if (is_sorted(stack_a))
		terminate(&stack_a, NULL, 0);
	list_to_int(&stack_a, &nums);
	sort(&stack_a, &stack_b);
	free(nums);
	terminate(&stack_a, NULL, -1);
	// terminate(&stack_b, NULL, -1);
	leak_check();
	return (0);
}
