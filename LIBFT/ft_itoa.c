/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:35:18 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/06 12:51:06 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n == 0 || n < 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static	void	ft_convert(char *str, int n, int i)
{
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	if (n == 0)
		str[0] = '0';
	while (i >= 0 && n != 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		return (str = ft_strdup("-2147483648"));
	len = ft_len(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_convert(str, n, len - 1);
	return (str);
}
