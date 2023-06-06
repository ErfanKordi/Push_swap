/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekordi <ekordi@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:57:25 by ekordi            #+#    #+#             */
/*   Updated: 2023/05/17 13:04:52 by ekordi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_element	*ft_lstmap(t_element *lst, void *(*f)(void *), void (*del)(void *))
{
	t_element	*new;
	t_element	*holder;
	void	*content;

	new = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		holder = ft_lstnew(content);
		if (!holder)
		{
			(*del)(content);
			ft_lstclear(&new, del);
			free(new);
			return (NULL);
		}
		ft_lstadd_back(&new, holder);
		lst = lst->next;
	}
	return (new);
}
