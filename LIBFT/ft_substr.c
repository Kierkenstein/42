/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:41:45 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/04 09:58:56 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*dest;

	i = 0;
	if (s == 0)
		return (0);
	if (start > ft_strlen(s) || len == 0)
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) - start >= len)
		dest = ft_calloc(len + 1, sizeof(char));
	else
		dest = ft_calloc(ft_strlen(s) + 1 - start, sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	return (dest);
}
