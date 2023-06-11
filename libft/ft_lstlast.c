/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:50:55 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/10 16:10:02 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_element	*ft_lstlast(t_element *lst)
{
	t_element	*last;

	last = lst;
	if (!lst)
		return (0);
	while (last->next)
		last = last->next;
	return (last);
}
