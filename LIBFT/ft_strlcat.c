/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:02:28 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/11 07:46:18 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	src_size = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_size);
	dst_size = ft_strlen(dst);
	if (size <= dst_size)
		return (size + src_size);
	while (src[i] != '\0' && ((i + dst_size) < size - 1))
	{
		dst[i + dst_size] = src[i];
		i++;
	}
	dst[i + dst_size] = '\0';
	return (dst_size + src_size);
}
