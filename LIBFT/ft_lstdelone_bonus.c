/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:23:30 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/10 14:49:11 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (del == NULL || lst == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
}
