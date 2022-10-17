/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:09:24 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/08 21:45:06 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_next;

	if (del == NULL || lst == NULL)
		return ;
	while ((*lst))
	{
		tmp_next = ((*lst)->next);
		del((*lst)->content);
		free(*lst);
		*lst = tmp_next;
	}
	*lst = NULL;
}
