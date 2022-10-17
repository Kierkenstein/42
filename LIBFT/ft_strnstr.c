/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:16:32 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/11 07:22:01 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_size;

	i = 0;
	j = 0;
	l_size = ft_strlen(little);
	if (big == 0 && len == 0)
		return (0);
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (j == l_size - 1)
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
