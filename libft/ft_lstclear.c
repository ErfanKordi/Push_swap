/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:17:52 by ekordi            #+#    #+#             */
/*   Updated: 2023/06/10 15:47:50 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_element **lst)
{
	t_element	*next_tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		next_tmp = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = next_tmp;
	}
	*lst = NULL;
}
