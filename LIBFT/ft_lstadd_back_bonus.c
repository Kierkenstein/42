/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:48:18 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/08 18:26:22 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			current = *lst;
			while (current->next)
				current = current->next;
			current->next = new;
		}
	}
}
