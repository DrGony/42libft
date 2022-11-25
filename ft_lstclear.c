/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:01:09 by hudelier          #+#    #+#             */
/*   Updated: 2022/11/25 08:06:02 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*next;

	if (!del || !lst)
		return ;
	curr = *lst;
	while (curr)
	{
		next = curr->next;
		ft_lstdelone(*lst, del);
		curr = curr->next;
	}
	*lst = NULL;
}
