/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gazzopar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:16:01 by gazzopar          #+#    #+#             */
/*   Updated: 2022/10/11 13:40:21 by gazzopar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check(long int n, int sign)
{
	if (n > INT_MAX || n * sign < -2147483648)
	{
		if (sign == -1)
			return (0);
		else
			return (-1);
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long int	n;

	i = 0;
	sign = 1;
	n = 0;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{	
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		if ((ft_check (n, sign)) != 1)
			return (ft_check(n, sign));
		n = n * 10;
		n = (nptr[i] - '0') + n;
		i++;
	}
	return (n * sign);
}
