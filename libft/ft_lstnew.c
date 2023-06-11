/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:45:22 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/11 18:34:30 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_element	*ft_lstnew(int content)
{
	t_element	*new_node;

	new_node = (t_element *)malloc(sizeof(t_element));
	if (new_node == NULL)
		return (NULL);
	new_node->value = content;
	new_node->next = NULL;
	return (new_node);
}
