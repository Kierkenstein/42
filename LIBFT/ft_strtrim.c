/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:43:53 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/11 07:04:18 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char const s1, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (s1 == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*trim;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (ft_set(s1[start], set) == 1)
			start++;
	while (ft_set(s1[end], set) == 1)
			end--;
	trim = ft_substr(s1, start, (end - start) + 1);
	return (trim);
}
