/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:24:08 by gazzopar          #+#    #+#             */
/*   Updated: 2022/09/28 17:28:57 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destcpy;
	const unsigned char	*srccpy;

	i = 0;
	destcpy = (unsigned char *)dest;
	srccpy = (const unsigned char *)src;
	if (destcpy == srccpy)
		return (dest);
	if (destcpy == 0 && srccpy == 0)
		return (0);
	while (i < n)
	{
		destcpy[i] = srccpy[i];
		i++;
	}
	return (dest);
}
