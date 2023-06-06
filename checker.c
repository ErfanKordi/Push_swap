/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:38:16 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/02 21:52:37 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_int(char *n)
{
	while (*n)
	{
		if (*n == '+' || *n == '-')
			++n;
		if (*n < '0' || *n > '9')
			return (0);
		else
			++n;
	}
	return (1);
}

int	is_dup(t_element *a, char *s)
{
	t_element	*aa;
	long		num;

	num = ft_atoi(s);
	if (num < -2147483648 || num > 2147483647)
		return(1);
	aa = a;
	while (aa != NULL)
	{
		if (aa->value == num)
			return (1);
		aa = aa->next;
	}
	return (0);
}
